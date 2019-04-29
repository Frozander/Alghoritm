#define ARRAYLENGTH 1000000


#if ARRAYLENGTH > 2147483647
    #define ARRAYLENGTH 2147483647
    #endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../libs/sorting/sorting.h"

int arrayToSort[ARRAYLENGTH];

//Main

int main(int argc, char const *argv[])
{
    
    srand(time(NULL));

    clock_t startClock, endClock;
    double elapsedTime;
    
    populateArray(arrayToSort, ARRAYLENGTH - 1);
    printf("\nArray Lenght = %d", ARRAYLENGTH);
    printf("\nStarting shellSort...\n");
    startClock = clock();
    shellSort(arrayToSort, ARRAYLENGTH - 1);
    endClock = clock() - startClock;
    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;

    printf("\n\nSorting Time: %f\n\n", elapsedTime);
    if(isSorted(arrayToSort, ARRAYLENGTH - 1)){
        printf("\nArray is sorted\n");
    }

    return 0;
}
