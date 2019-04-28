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

//shellSort function
int shellSort(int targetArray[], int k)
{

    for(int gap = k / 2; gap > 0 ; gap /= 2)
    {
        
        for(int i = gap; i < k; i++)
        {
            int temp = targetArray[i];

            int j;
            for(j = i; j >= gap && targetArray[j - gap] > temp; j -= gap)
            {
                targetArray[j] = targetArray[j - gap];
            }

            targetArray[j] = temp;
            
        }
        
    }

    return 0;
    
}

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
