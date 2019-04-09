#include <time.h>

#include "./sorting.h"

int arrayToSort[ARRAYLENGTH];

void coctailSort(int targetArray[], int k){
    
    int max = 0, min = 0, i = 0, sorted = 0;

    while(!isSorted(targetArray, k))
    {
        
        for(i = 0; i < k - sorted - 1; i++)
        {

            if (targetArray[i] < targetArray[i + 1])
            {
                min = i;   
            }

            if (targetArray[i] > targetArray[i + 1]) 
            {
                max = i;
            }

        }

        swap(&targetArray[min], &targetArray[sorted]);
        swap(&targetArray[max], &targetArray[k - sorted]);


        // TO DO: Add reverse loop to add the coctail effect
        
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
    

    endClock = clock() - startClock;
    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;

    printf("\n\nSorting Time: %f\n\n", elapsedTime);

    printf("\nSorted Array: ");

    printArray(arrayToSort, ARRAYLENGTH);

    return 0;

}