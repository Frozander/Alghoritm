#include "FrozHashFuncs.h"

// Standard FrozHash that uses basic XOR,
//string to hash is 'input', and hash key is 'key'
char *frozHash(char* input, char* key){

}

// Creates a random KeyString and writes it over to 'input'
void randomKeyGenerator(char* input, int length){

    int i = 0;
    int inputLength = strlen(input);

    input = malloc(sizeof(char) * length);

    if (input == 0) {
        printf("Could not create a key...");
        return;
    }
    

    while(i < inputLength){
    
        input[i] = (random() % 27) + 97;

        i++;
    
    }
    
}