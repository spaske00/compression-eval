import java.util.*;
/* 
    ForkJoinPool methods :
    getActiveThreadCount(), getParallelism(), getPoolSize(), invoke(ForkJoinTask fjt), getRunningThreadCount()

    RecursiveTask has method compute
*/

import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.RecursiveTask;

import org.graalvm.nativeimage.*;
import org.graalvm.nativeimage.c.function.*;

/**
 * This program recursively finds the sum of an array in parallel using Java's
 * ForkJoin Framework. This example is from Dan Grossman's A Sophomoric
 * Introduction to Shared-Memory Parallelism and Concurrency, Chapter 3.
 */
public class ForkJoinRecursiveSum extends RecursiveTask<Integer> {
	public static final int SEQUENTIAL_THRESHOLD = 10;

	private int lo, hi;
	private int[] arr;

	public ForkJoinRecursiveSum(int[] arr, int lo, int hi) {
		this.lo = lo;
		this.hi = hi;
		this.arr = arr;
	}

	@Override
	public Integer compute() {
		if (hi - lo <= SEQUENTIAL_THRESHOLD) {
			int ans = 0;
			for (int i = lo; i < hi; i++) {
				ans += arr[i];
			}
			return ans;
		} else {
			int mid = (lo + hi) / 2;
			ForkJoinRecursiveSum left = new ForkJoinRecursiveSum(arr, lo, mid);
			ForkJoinRecursiveSum right = new ForkJoinRecursiveSum(arr, mid, hi);
			left.fork();
			int rightAns = right.compute();
			int leftAns = left.join();
			return leftAns + rightAns;
		}
	}

	public static int sum(int[] arr) throws InterruptedException {
		ForkJoinPool pool = ForkJoinPool.commonPool();
		return pool.invoke(new ForkJoinRecursiveSum(arr, 0, arr.length));
	}

	@CEntryPoint(include = CEntryPoint.NotIncludedAutomatically.class)
	public static void isolateMain(IsolateThread context) {
		System.out.println("Isolate thread:\t" + context.rawValue());
		try {
			int[] arr = new int[100];
			for (int i = 0; i < arr.length; i++) {
				arr[i] = i;
			}
			int sum = sum(arr);
			System.out.println("Sum: " + sum);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}

	public static void main(String[] args) throws InterruptedException {
		System.out.println("Main thread:\t" + CurrentIsolate.getCurrentThread().rawValue());
		Thread t = new Thread(() -> {
			IsolateThread isolate = Isolates.createIsolate(Isolates.CreateIsolateParameters.getDefault());
			isolateMain(isolate);
			Isolates.tearDownIsolate(isolate);
		});
		t.start();
		t.join();
		System.out.println("Thread finished");
	}

}

