package com.example;

import org.openjdk.jmh.annotations.*;
import org.openjdk.jmh.infra.Blackhole;
import java.util.concurrent.*;

@Warmup(iterations = 2, time = 30, timeUnit = TimeUnit.SECONDS)
@Measurement(iterations = 5, time = 30, timeUnit = TimeUnit.SECONDS)
@State(Scope.Benchmark)
public class ExampleBenchmark {

    @Param("14")
    private static int n;

    @Benchmark
    @Fork(0)
    public static void bench(Blackhole blackhole) throws Exception {
        String s = "Hello".repeat(n);
        blackhole.consume(s);
    }

    private static final class Sample {


    }

}
