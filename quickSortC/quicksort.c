#define ARRAYLENGTH 1000000


#if ARRAYLENGTH > 2147483647
    #define ARRAYLENGTH 2147483647
    #endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayToSort[ARRAYLENGTH];

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

    while(i < k)
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

int main()
{

    clock_t startClock, endClock;
    double elapsedTime;
    
    populateArray(arrayToSort, ARRAYLENGTH - 1);

    //printArray(arrayToSort, ARRAYLENGTH);

    printf("\nArray Lenght = %d", ARRAYLENGTH);
    printf("\nStarting quickSort...\n");



    startClock = clock();

    quickSort(arrayToSort, 0, ARRAYLENGTH - 1);

    endClock = clock() - startClock;

    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;



    printf("\n\nSorting Time: %f\n\n", elapsedTime);

    printf("\nSorted Array: ");

    //printArray(arrayToSort, ARRAYLENGTH);

    if(isSorted(arrayToSort, ARRAYLENGTH - 1)){
        printf("\nArray is sorted\n");
    }
    
    return 0;
}
