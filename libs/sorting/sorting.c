#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

#include <sorting.h>

// Swaps value of a with the value of b
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

// Prints the targetArray with k length
void printArray(int targetArray[], int k) 
{ 
    int i; 
    for (i = 0; i < k; i++) 
        printf("%d->", targetArray[i]); 
    printf("\n"); 
}

// Populates ratgetArray with random values in k length
void populateArray(int targetArray[],int k)
{   

    int i = 0;

    while(i < k)
    {
        
        targetArray[i] = rand() % 1001;
        i++;

    }

}

// Checks the track if it is sorted
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