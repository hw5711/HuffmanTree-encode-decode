#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include "Huffman.h"

using namespace std;

int main()
{
    string in_file = "input.txt";
    string out_file = "output.txt";
    string out_file2 = "output2.txt";

    Huffman h(in_file, out_file);
    h.compress();

    Huffman h2(out_file,out_file2);
    h2.decompress();

    return 0;
}



