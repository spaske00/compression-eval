package com.example;

import java.io.*;
import java.math.*;
import org.graalvm.polyglot.*;

public class Service {
    public static final String SOURCE = ""
    + "const fibonacci = (n) => {\n"
    + "    const fib = new Array(n + 1);\n"
    + "    fib[0] = BigInt(0);\n"
    + "    fib[1] = BigInt(1);\n"
    + "    for (let i = 2; i <= n; i++) {\n"
    + "        fib[i] = fib[i - 1] + fib[i - 2];\n"
    + "    }\n"
    + "    return fib[n];\n"
    + "};\n";

    public static BigInteger invoke(int n) throws IOException {
        try (Context context = Context.create()) {
            context.eval(Source.newBuilder("js", SOURCE, "src.js").build());
            Value f = context.getBindings("js").getMember("fibonacci");
            return f.execute(n).asBigInteger();
        } // context.close() is automatic
    }
} 
