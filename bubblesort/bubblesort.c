#define ARRAYLENGTH 1000


#if ARRAYLENGTH > 2147483647
    #define ARRAYLENGTH 2147483647
    #endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../libs/sorting/sorting.h"

int arrayToSort[ARRAYLENGTH];

int main(int argc, char const *argv[])
{
    
    clock_t startClock, endClock;
    double elapsedTime;

    populateArray(arrayToSort, ARRAYLENGTH);

    printArray(arrayToSort, ARRAYLENGTH);

    startClock = clock();

    // Add Bubble sort
    bubbleSort(arrayToSort, ARRAYLENGTH);

    endClock = clock() - startClock;
    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;

    printf("\n\nSorting Time: %f\n\n", elapsedTime);

    printf("\nSorted Array: ");

    printArray(arrayToSort, ARRAYLENGTH);

    return 0;

}
