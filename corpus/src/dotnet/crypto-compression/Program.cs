using System.IO.Compression;
using System.Security.Cryptography;
using System.Text;

var payload = Encoding.UTF8.GetBytes(string.Join('\n', Enumerable.Range(0, 256).Select(i => $"row-{i:D4}:compression-native-aot")));

using var compressed = new MemoryStream();
using (var gzip = new GZipStream(compressed, CompressionLevel.SmallestSize, leaveOpen: true))
{
    gzip.Write(payload);
}

var compressedBytes = compressed.ToArray();
var digest = SHA256.HashData(compressedBytes);

using var key = new HMACSHA256(Encoding.UTF8.GetBytes("compression-eval-dotnet"));
var tag = key.ComputeHash(digest);

Console.WriteLine($"{payload.Length}:{compressedBytes.Length}:{Convert.ToHexString(tag)[..16]}");
