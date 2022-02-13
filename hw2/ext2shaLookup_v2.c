#include <stdio.h>
#include <stdlib.h>
#include <openssl/sha.h>

/* ext2shaLookup_v2.c 
 * Brynn Harrington
 * 
 * Will be identical to v1, but the read, lookup, compare will use byte based 
 * operations and memory compares. This time, you will read 41bytes (which is 
 * 40bytes hash + 1 character that is ‘\n’. The fscanf in the version 1 of your 
 * solution will consume the \n and that’s how fscanf knows that it hit the end
 * of the line. fread(2) does not do that as it reads raw un-buffered input and 
 * it will read exactly the number of bytes you want it to read. Be careful and 
 * troubleshoot your program behavior on the lookup of a known hash in a file 
 * (Hint: make sure when you are comparing the hashes that you only compare the 
 * hash itself and no ‘additional’ characters. 
 */