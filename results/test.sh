#!/bin/bash

python plot_bubble.py silesia.csv "Ratio" "Compression speed"
python plot_bubble.py silesia.csv "Ratio" "Compression speed" "Filename"
python plot_bubble.py silesia.csv "Ratio" "Compression speed" "Filename" "Decompression speed"
python plot_bubble.py silesia.csv "Ratio" "Compression speed" "Compressor name" "Decompression speed" "Filename"
python plot_bubble.py exe-corpus.csv "Ratio" "Compression speed" "Compressor name" "Decompression speed" "Filename" graalvm-linux-x64-O2
python plot_bubble.py exe-corpus.csv "Ratio" "Decompression speed" "Compressor name" "Compression speed" "Filename" gpython r
python plot_metrics.py exe-corpus.csv "Decompression speed" graalvm-linux-x64-O2
python plot_metrics.py silesia.csv "Decompression speed" 
python plot_metrics.py silesia.csv "Compression speed" 
python plot_metrics.py exe-corpus.csv "Compression speed" gcc-linux-x64-O2
python plot_metrics.py exe-corpus.csv "Compression speed" dotnet-linux-x64-release
