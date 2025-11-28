# ConfusionDiffusion

ConfusionDiffusion is a student project inspired by a cybersecurity lecture

## Details

It is a C project in witch I discovered Make, different compilers and tired to make a linked list on the heap.  
The project is meant for windows but compiled with Mingw-w64; I know this is not proper, I wanted to experiment.  

The algorithm is operating on 4 bit nibbles of the file, executing substitution on 2 bits at a time, recombining the output into the nibble and executing transposition on the 4 bits. The key is being updated.  
These steps are repeated n times and the final output is written in order in the outputFile.


## Usage
Execute the makefile and the executable. You need to specify the input file and the output file, and the operation you want to apply to it.
It should work with every type of file.

Arguments: <mode(encrypt/decrypt)> -k <key2digits> -i <input_file> -o <output_file>  

Example
```code
.\confDiffCLI.exe encrypt -k 78 -i plaintextFile.txt -o ciphertextFile
```
