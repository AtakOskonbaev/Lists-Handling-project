##Algorithm (RLE)

This code is a simple implementation of data compression using series length encoding (Run-Length Encoding, RLE) to C++.

##Description

Run-length encoding (RLE) is a lossless compression method where sequences that display redundant data are stored as a single data value. This value represents the repeated block, and shows how many times it appears in the image. During decompression, the image can be reconstructed exactly from this information.

##Files

Input.txt - changable by user file, where strings will be compressed to other file.
compressor.cpp - code that takes strings from input.txt, compresses it and returns the output into compressed.txt
compressed.txt - file with values that compressed with compressor.cpp
decompressed.cpp - code that takes strings from compressed.txt and return into decompressed.txt
decompressed.txt - should be compared with input.txt to find a errors in code

