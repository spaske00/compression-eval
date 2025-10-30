package com.example;

import java.util.Random;

public class App {
    public static void main(String[] args) throws java.io.IOException {
        if (args.length < 3) {
            System.err.println("usage: ./prog <low_bound> <up_bound> <iters>");
            System.exit(1);
        }

        int l = Integer.parseInt(args[0]);
        int h = Integer.parseInt(args[1]);
        int N = Integer.parseInt(args[2]);
        Random r = new Random();

        System.out.println("Running " + N + " iterations");
        for (int i = 0; i < N; i++) {
            int n = rng(r, h, l);
            System.out.println("Iteration " + i + ", testing " + n);
            System.out.println(Service.invoke(n));
        }
        System.out.println("Finished");
    }

    private static int rng(Random r, int h, int l) {
        return r.nextInt(h - l) + l;
    }
} 
