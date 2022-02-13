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
 * file entries or you find a match.
 *
 * Compile with: gcc -o text2shaLookup_v1 text2shaLookup_v1.c -lcrypto
 * Execute with: ./text2shaLookup_v1 <input hash file> <password string>
 *
 * Sample output:
    $./text2shaLookup_v1 pwned_hashes.txt default
    Searching for password “default”:
    Searching in file “pwned_hashes.txt”
    sha hash: 7505D64A54E061B7ACD54CCD58B49DC43500B635 Found, line: 7844
    Time searching: 0.000960s
 */

int main(const int argc, const char *argv[])
{
    // verify the user has the correct input parameters
    if (argv != 2)
    {
        fprintf(stderr, "USAGE: ./text2shaLookup_v1 <input hash file> <password string>\n");
        return EXIT_FAILURE;
    }

    // file_operation_primitives();

    return EXIT_SUCCESS;
}
