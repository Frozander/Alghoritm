#define ARRAYLENGTH 100000


#if ARRAYLENGTH > 2147483647
    #define ARRAYLENGTH 2147483647
    #endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayToSort[ARRAYLENGTH];


void swap (int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

void printArray(int targetArray[], int k) 
{ 
    int i; 
    for (i = 0; i < k; i++) 
        printf("%d->", targetArray[i]); 
    printf("\n"); 
}

void populateArray(int targetArray[],int k)
{   

    srand(time(NULL));
    int i = 0;

    while(i < k)
    {
        
        targetArray[i] = rand();
        i++;

    }

}

int main(int argc, char const *argv[])
{
    
    clock_t startClock, endClock;
    double elapsedTime;

    populateArray(arrayToSort, ARRAYLENGTH);

    startClock = clock();

    // Add Bubble sort

    endClock = clock() - startClock;
    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;

    printf("\n\nSorting Time: %f\n\n", elapsedTime);

    printf("\nSorted Array: ");

    printArray(arrayToSort, ARRAYLENGTH);

    return 0;

}
