#include "FrozHashFuncs.h"
#ifndef _INC_STDLIB
    #include <stdlib.h>
#endif

#ifndef _INC_STDIO
    #include <stdio.h>
#endif


// Standard FrozHash that uses basic XOR,
//string to hash is 'input', and hash key is 'key'
char *frozHash(char* input, char* key){

}

//Ceasar Cyper that shifts the string by 'shiftValue'
void ceasarCyper(char *input, int shiftValue){

    int i = 0;

    //NULL EXCEPTION CHECK
    if (input == NULL) {
        printf("\nNull String terminating Ceasar Cypher...");

        return NULL;
    }

    int inputLenght = strlen(input);
    int add;

    if (shiftValue < 0) add = -1;
    else add = 1;

    while(inputLenght-- > 0){
        
        if ((input[inputLenght] > 64) && (input[inputLenght] < 91)) 
        {
            //UPPERCASE
            i = 0;

            while(i++ < shiftValue)
            {

                input[inputLenght]+= add;

                if (input[inputLenght] > 90)
                {
                    input[inputLenght] = 65;
                }

                if (input[inputLenght] < 65) 
                {
                    input[inputLenght] = 90;
                }
                
                
            }
            
            input[inputLenght] += shiftValue;

        } else if ((input[inputLenght] > 96) &&(input[inputLenght] < 123))
        {
            //LOWERCASE
            i = 0;
            
            while(i++ < shiftValue)
            {

                input[inputLenght]+= add;

                if (input[inputLenght] > 122)
                {
                    input[inputLenght] = 97;
                }
                if (input[inputLenght] < 97) 
                {
                    input[inputLenght] = 122;
                }
                
                
            }

            input[inputLenght] += shiftValue;

        } else
        {
            //NON-ALPHABETIC
            printf("\nInput contains non alphabetic characters... Terminating Ceaser Cyper");
            return NULL;
        }
        
    }
    
    
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