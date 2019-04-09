#include "sorting.h"
#ifndef _INC_STDLIB
    #include <stdlib.h>
#endif

#ifdef _INC_TIME
    #include <time.h>
#endif

#ifndef _INC_STDIO
    #include <stdio.h>
#endif

//Swaps the two elements of the array. Gets memory adresses of the values
void swap (int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

//Prints the k number of values of the targetArray
void printArray(int targetArray[], int k) 
{ 
    int i; 
    for (i = 0; i < k; i++) 
        printf("%d->", targetArray[i]); 
    printf("\n"); 
}

//Populates an array with k number of values
void populateArray(int targetArray[],int k)
{   

    srand(time(NULL));
    int i = 0;

    while(i < k)
    {
        
        targetArray[i] = rand() % 1001;
        i++;

    }

}

//Checks if an array of size k is sorted
int isSorted(int targetArray[], int k)
{

    int i = 0;
    int sorted = 1;

    while(i < k - 1)
    {
        
        if(targetArray[i] > targetArray[i + 1])
        {
            sorted = 0;
            return sorted;
        }

        i++;

    }

    return sorted;
    
}