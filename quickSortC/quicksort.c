#define ARRAYLENGTH 100000


#if ARRAYLENGTH > 2147483647
    #define ARRAYLENGTH 2147483647
    #endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayToSort[ARRAYLENGTH];

void swap(int *n1, int *n2){

    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int partition(int targetArray[], int low, int high){

    int pivot = targetArray[high];

    int i = (low - 1);

    for(int j = low; j <= high - 1; j++)
    {
        
        if (targetArray[j] <= pivot) {
            
            i++;
            swap((&targetArray[i]), (&targetArray[j]));
        }
        
    }

    swap((&targetArray[i + 1]), (&targetArray[high]));
    return (i + 1);

}

void quickSort(int targetArray[], int low, int high){
    
    if(low < high){
        
        int partitionIndex = partition(targetArray, low, high);

        quickSort(targetArray, low, partitionIndex - 1);
        quickSort(targetArray, partitionIndex + 1, high);

    }
}

void populateArray(int targetArray[], int k){

    srand(time(NULL));

    for(int i = 0; i < k; i++)
    {
        targetArray[i] = rand() % 100001;
    }
    
}

void printArray(int targetArray[], int k) { 
    int i; 
    for (i = 0; i < k; i++) 
        printf("%d->", targetArray[i]); 
    printf("\n"); 
} 

int main()
{

    clock_t startClock, endClock;
    double elapsedTime;
    
    populateArray(arrayToSort, ARRAYLENGTH);

    //printArray(arrayToSort, ARRAYLENGTH);

    printf("\nStarting quickSort...\n");



    startClock = clock();

    quickSort(arrayToSort, 0, ARRAYLENGTH);

    endClock = clock() - startClock;

    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;



    printf("\n\nSorting Time: %f\n\n", elapsedTime);

    printf("\nSorted Array: ");

    //printArray(arrayToSort, ARRAYLENGTH);
    
    return 0;
}
