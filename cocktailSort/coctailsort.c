#include <time.h>

#include "./sorting.h"

int arrayToSort[ARRAYLENGTH];

void coctailSort(int targetArray[], int k){
    
    int max = 0, min = 0, i = 0, sorted = 0;

    while(!isSorted(targetArray, k))
    {   

        min = 0;
        max = 0;
        
        for(i = 0; i < k - sorted; i++)
        {

            if (targetArray[min] < targetArray[i])
            {
                min = i;   
            }

            if (targetArray[max] > targetArray[i]) 
            {
                max = i;
            }

        }

        swap(&targetArray[min], &targetArray[sorted]);
        swap(&targetArray[max], &targetArray[k - sorted]);


        // TO DO: Add reverse loop to add the coctail effect (optional)
        
        sorted++;

    }
    
}

int main(int argc, char const *argv[])
{
    
    clock_t startClock, endClock;
    double elapsedTime;

    populateArray(arrayToSort, ARRAYLENGTH);

    printArray(arrayToSort, ARRAYLENGTH);

    startClock = clock();

    // Add CoctailSort
    coctailSort(arrayToSort, ARRAYLENGTH);

    endClock = clock() - startClock;
    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;

    printf("\n\nSorting Time: %f\n\n", elapsedTime);

    printf("\nSorted Array: ");

    printArray(arrayToSort, ARRAYLENGTH);

    return 0;

}