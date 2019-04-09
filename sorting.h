#ifndef _SORTING_FUNCS
    #define _SORTING_FUNCS


#define ARRAYLENGTH 1000


#if ARRAYLENGTH > 2147483647
    #define ARRAYLENGTH 2147483647
    #endif

void swap (int *a, int *b);
void printArray(int targetArray[], int k);
void populateArray(int targetArray[],int k);
int isSorted(int targetArray[], int k);


#endif

