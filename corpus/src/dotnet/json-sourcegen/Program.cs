using System.Security.Cryptography;
using System.Text.Json;
using System.Text.Json.Serialization;

var readings = new SensorReading[]
{
    new("edge-01", 21.45m, 0.31m, new DateTimeOffset(2026, 5, 8, 8, 0, 0, TimeSpan.Zero)),
    new("edge-02", 19.82m, 0.44m, new DateTimeOffset(2026, 5, 8, 8, 1, 0, TimeSpan.Zero)),
    new("edge-03", 24.03m, 0.28m, new DateTimeOffset(2026, 5, 8, 8, 2, 0, TimeSpan.Zero))
};

var json = JsonSerializer.Serialize(readings, JsonCorpusContext.Default.SensorReadingArray);
var roundTrip = JsonSerializer.Deserialize(json, JsonCorpusContext.Default.SensorReadingArray) ?? [];
var checksum = SHA256.HashData(System.Text.Encoding.UTF8.GetBytes(json));

Console.WriteLine($"{roundTrip.Length}:{Convert.ToHexString(checksum)[..16]}");

public sealed record SensorReading(
    string DeviceId,
    decimal TemperatureCelsius,
    decimal Vibration,
    DateTimeOffset CapturedAt);

[JsonSerializable(typeof(SensorReading[]))]
[JsonSourceGenerationOptions(WriteIndented = false)]
internal sealed partial class JsonCorpusContext : JsonSerializerContext;
