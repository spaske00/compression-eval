#!/bin/bash

./venv/bin/python plot_bubble.py silesia.csv "Ratio" "Compression speed"
./venv/bin/python plot_bubble.py silesia.csv "Ratio" "Compression speed" "Filename"
./venv/bin/python plot_bubble.py silesia.csv "Ratio" "Compression speed" "Filename" "Decompression speed"
./venv/bin/python plot_bubble.py silesia.csv "Ratio" "Compression speed" "Compressor name" "Decompression speed" "Filename"
./venv/bin/python plot_bubble.py exe-corpus.csv "Ratio" "Compression speed" "Compressor name" "Decompression speed" "Filename" graalvm-linux-x64-O2
./venv/bin/python plot_bubble.py exe-corpus.csv "Ratio" "Decompression speed" "Compressor name" "Compression speed" "Filename" graalvm-linux-x64-O2


 ./venv/bin/python plot_metrics.py exe-corpus.csv "Decompression speed" graalvm-linux-x64-O2
 ./venv/bin/python plot_metrics.py silesia.csv "Decompression speed" 
 ./venv/bin/python plot_metrics.py silesia.csv "Compression speed" 
 ./venv/bin/python plot_metrics.py exe-corpus.csv "Compression speed" gcc-linux-x64-O2
 ./venv/bin/python plot_metrics.py exe-corpus.csv "Compression speed" dotnet-linux-x64-release