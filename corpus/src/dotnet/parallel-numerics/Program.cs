using System.Numerics;

const int Length = 4096;
const int ChunkSize = 256;

var left = Enumerable.Range(0, Length).Select(i => Math.Sin(i * 0.01)).ToArray();
var right = Enumerable.Range(0, Length).Select(i => Math.Cos(i * 0.02)).ToArray();
var chunkCount = (Length + ChunkSize - 1) / ChunkSize;
var partials = new double[chunkCount];

Parallel.For(0, chunkCount, chunk =>
{
    var start = chunk * ChunkSize;
    var end = Math.Min(start + ChunkSize, Length);
    var sum = Vector<double>.Zero;
    var i = start;

    for (; i <= end - Vector<double>.Count; i += Vector<double>.Count)
    {
        sum += new Vector<double>(left, i) * new Vector<double>(right, i);
    }

    var scalar = Vector.Dot(sum, Vector<double>.One);
    for (; i < end; i++)
    {
        scalar += left[i] * right[i];
    }

    partials[chunk] = scalar;
});

Console.WriteLine($"{Vector<double>.Count}:{partials.Sum():F6}");
