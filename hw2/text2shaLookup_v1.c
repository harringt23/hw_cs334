#include <stdio.h>
#include <stdlib.h>
#include <openssl/sha.h> 

/* text2shaLookup_v1.c 
 * Brynn Harrington
 * 
 *
 * Use user level file operations primitives including: 
 * fopen, fscanf, fprintf, strlen, EOF, strcmp, strncmp... 
 * to read, lookup, and compare the hashed string passed in from CLI against the 
 * password hashes read from stored entries in the file. Read one line from the 
 * opened file and compare the two hash strings, and repeat until you check all 
 * file entries or you find a match .
 */