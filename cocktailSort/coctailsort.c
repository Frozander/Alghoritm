#include <time.h>

#include "./sorting.h"

int arrayToSort[ARRAYLENGTH];

void coctailSort(int targetArray[], int k){
    
}

int main(int argc, char const *argv[])
{
    
    clock_t startClock, endClock;
    double elapsedTime;

    populateArray(arrayToSort, ARRAYLENGTH);

    printArray(arrayToSort, ARRAYLENGTH);

    startClock = clock();

    // Add CoctailSort
    

    endClock = clock() - startClock;
    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;

    printf("\n\nSorting Time: %f\n\n", elapsedTime);

    printf("\nSorted Array: ");

    printArray(arrayToSort, ARRAYLENGTH);

    return 0;

}