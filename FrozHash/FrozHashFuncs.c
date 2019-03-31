#include "FrozHashFuncs.h"
#ifndef _INC_STDLIB
    #include <stdlib.h>
#endif


// Standard FrozHash that uses basic XOR,
//string to hash is 'input', and hash key is 'key'
char *frozHash(char* input, char* key){
    
}

// Creates a random KeyString and writes it over to 'input'
void randomKeyGenerator(char *input, int length){

    char charset[] = "0123456789"
                     "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (length-- > 0) {
        int index = (double) rand() / RAND_MAX * (sizeof charset - 1);
        *input++ = charset[index];
    }
    *input = '\0';
    
}