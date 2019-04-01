#ifndef _FROZHASH_H
    #define _FROZHASH_H

#define EXP_CODE_MALLOC 1

char * frozHash(char* input, char* key);
void randomKeyGenerator(char* input, int length);
void ceasarCyper(char *input, int shiftValue);

#endif