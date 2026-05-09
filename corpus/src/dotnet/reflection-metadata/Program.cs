using System.Diagnostics.CodeAnalysis;
using System.Reflection;

var summary = Describe(typeof(TradeRecord));
Console.WriteLine(summary);

static string Describe(
    [DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors | DynamicallyAccessedMemberTypes.PublicProperties)]
    Type modelType)
{
    var instance = Activator.CreateInstance(modelType);
    var parts = modelType.GetProperties()
        .OrderBy(property => property.Name)
        .Select(property =>
        {
            var label = property.GetCustomAttribute<FieldLabelAttribute>()?.Name ?? property.Name;
            var value = property.GetValue(instance);
            return $"{label}={value}";
        });

    return string.Join(";", parts);
}

public sealed class TradeRecord
{
    [FieldLabel("id")]
    public string Id { get; init; } = "T-2026-0007";

    [FieldLabel("notional")]
    public decimal Notional { get; init; } = 1250000m;

    [FieldLabel("venue")]
    public string Venue { get; init; } = "XNAS";
}

[AttributeUsage(AttributeTargets.Property)]
public sealed class FieldLabelAttribute(string name) : Attribute
{
    public string Name { get; } = name;
}
