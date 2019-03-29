#define ARRAYLENGTH 100000


#if ARRAYLENGTH > 2147483647
    #define ARRAYLENGTH 2147483647
    #endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayToSort[ARRAYLENGTH];

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

void printArray(int targetArray[], int k) 
{ 
    int i; 
    for (i = 0; i < k; i++) 
        printf("%d->", targetArray[i]); 
    printf("\n"); 
} 

void insertionSort(int targetArray[], int k)
{

    int key;
    int i, j;

    for(i = 0; i < k; i++)
    {
        key = targetArray[i];
        j = i - 1;

        while(j >= 0 && targetArray[j] > key)
        {
            targetArray[j + 1] = targetArray[j];
            j -= 1;
        }
        
        targetArray[j + 1] = key;

    }
    

}

int main(int argc, char const *argv[])
{

    clock_t startClock, endClock;
    double elapsedTime;

    if(ARRAYLENGTH == 2147483647){
        printf("\nARRAYLENGTH is higher than allowed value... Setting it back to 2147483647\n");
    }

    populateArray(arrayToSort, ARRAYLENGTH);

    //printArray(arrayToSort, ARRAYLENGTH);

    printf("\nStarting insertionSort...\n");

    startClock = clock();

    insertionSort(arrayToSort, ARRAYLENGTH);

    endClock = clock() - startClock;

    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;

    printf("\n\nSorting Time: %f\n\n", elapsedTime);

    printf("\nSorted Array: ");

    //printArray(arrayToSort, ARRAYLENGTH);
    

    return 0;
}
