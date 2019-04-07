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

void swap (int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

int isSorted(int targetArray[])
{

    int i = 0;
    int sorted = 1;

    while(i < ARRAYLENGTH - 1)
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

void randomize ( int arr[], int n ) 
{ 
    // Use a different seed value so that we don't get same 
    // result each time we run this program 
    srand ( time(NULL) ); 
  
    // Start from the last element and swap one by one. We don't 
    // need to run for the first element that's why i > 0 
    for (int i = n-1; i > 0; i--) 
    { 
        // Pick a random index from 0 to i 
        int j = rand() % (i+1); 
  
        // Swap arr[i] with the element at random index 
        swap(&arr[i], &arr[j]); 
    } 
} 

int main(int argc, char const *argv[])
{

    clock_t startClock, endClock;
    double elapsedTime;
    
    populateArray(arrayToSort, ARRAYLENGTH);

    startClock = clock();

    while(!(isSorted(arrayToSort)))
    {
        randomize(arrayToSort, ARRAYLENGTH);
    }

    endClock = clock() - startClock;

    elapsedTime = ((double) endClock ) / CLOCKS_PER_SEC;

    printf("\n\nSorting Time: %f\n\n", elapsedTime);

    printf("\nSorted Array: ");

    printArray(arrayToSort, ARRAYLENGTH);
    

    return 0;
}
