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

    while(inputLenght-- > 0){
        
        if ((input[inputLenght] > 64) && (input[inputLenght] < 133)) 
        {
            //UPPERCASE
            i = 0;

            while(i++ < shiftValue)
            {

                input[inputLenght]++;

                if (input[inputLenght] > 122)
                {
                    input[inputLenght] = 65;
                }
                
            }
            
            input[inputLenght] += shiftValue;

        } else if ((input[inputLenght] > 140) &&(input[inputLenght] < 173))
        {
            //LOWERCASE
            i = 0;
            
            while(i++ < shiftValue)
            {

                input[inputLenght]++;

                if (input[inputLenght] > 172)
                {
                    input[inputLenght] = 141;
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