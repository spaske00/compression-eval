import java.util.*;

import org.graalvm.nativeimage.*;
import org.graalvm.nativeimage.c.function.*;

public class HelloIsolate {
    public static void main(String[] args) {
        System.out.println("Main thread:\t" + hex(CurrentIsolate.getCurrentThread().rawValue()));
        
        Isolates.CreateIsolateParameters params = Isolates.CreateIsolateParameters.getDefault();
        IsolateThread isolate = Isolates.createIsolate(params);
        isolateMain(isolate);
        Isolates.tearDownIsolate(isolate);
    }

    @CEntryPoint(include = CEntryPoint.NotIncludedAutomatically.class)
    public static void isolateMain(IsolateThread context) {
        System.out.println("Hello from isolated world!");
        System.out.println("Isolate thread:\t" + hex(context.rawValue()));
    }

    private static String hex(long n) {
        return String.format("0x%08x", n);
    }
}
