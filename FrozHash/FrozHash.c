#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "FrozHashFuncs.h"

char *inputString;
char *keyString;

int main(int argc, char const *argv[])
{


    srand(time(NULL));
    

    //If an unexpected input is given throws an exception and shows the expected input
    if (argc < 2 && argc >3) 
    {

        printf("\nUsage: ./FrozHash <inputString> <Key | Optional>");
        return -1;

    }

    int inputLength = strlen(argv[2]);

    inputString = malloc(sizeof(char) * inputLength);

    //If a key is not given, creates a random key
    if (argc == 2) {

        printf("\nNo Key input given... Creating a random key");

        //TO DO: Add a real psuedorandom key generator (it uses random() for now)
        int i = 0;
        int randomLength = random() % inputLength + 1;

        keyString = malloc(sizeof(char) * randomLength);

        while(i < inputLength){
            
            keyString[i] = (random() % 27) + 97;

            i++;
            
        }

        printf("Your new key is generated. Key: %s", keyString);

    }


    char *outputString = frozHash(inputString, keyString);
    
    
    return 0;
}
