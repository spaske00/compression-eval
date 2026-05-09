using System.Globalization;
using System.Text.RegularExpressions;

var culture = CultureInfo.GetCultureInfo("sr-Latn-RS");
var text = "Zdravo, 1.234,50 RSD; ponuda vazi do 08.05.2026.";
var numbers = DecimalPattern().Matches(text)
    .Select(match => decimal.Parse(match.Value, NumberStyles.Number, culture))
    .ToArray();

var comparison = culture.CompareInfo.Compare("dorde", "džordže", CompareOptions.IgnoreCase);
var headline = culture.TextInfo.ToTitleCase("native aot corpus");

Console.WriteLine($"{headline}:{numbers.Sum():N2}:{Math.Sign(comparison)}");

partial class Program
{
    [GeneratedRegex(@"\d{1,3}(?:\.\d{3})*,\d{2}", RegexOptions.CultureInvariant)]
    private static partial Regex DecimalPattern();
}
