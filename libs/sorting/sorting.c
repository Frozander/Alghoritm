#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

#include "sorting.h"

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

// Randomizes arr of n lenght
void randomize (int arr[], int n) 
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

// ShellSort function
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

// Partition algorithm for quicksort
int partition(int targetArray[], int low, int high)
{

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

// Hoare Partition for quicksortHoare
int hoarePartition(int targetArray[], int low, int high)
{

    int pivot = targetArray[(low + high) / 2];
    int i = low - 1;
    int j = high + 1;

    while(1)
    {
        
        do
        {
            i++;
        } while (targetArray[i] < pivot);
        
        do
        {
            j--;
        } while (targetArray[j] > pivot);

        if (i >= j)
        {
            return j;
        }

        swap(&targetArray[i], &targetArray[j]);        

    }
    

}

// Quicksort algorithm for targerArray[], with low and high points of the array
void quickSort(int targetArray[], int low, int high){
    
    if(low < high){
        
        int partitionIndex = partition(targetArray, low, high);

        quickSort(targetArray, low, partitionIndex - 1);
        quickSort(targetArray, partitionIndex + 1, high);

    }
}

// Quicksort algorithm with Hoare
void quickSortHoare(int targetArray[], int low, int high){
    
    if(low < high){
        
        int partitionIndex = hoarePartition(targetArray, low, high);

        quickSort(targetArray, low, partitionIndex - 1);
        quickSort(targetArray, partitionIndex + 1, high);

    }
}

// Insertion sort algorithm
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

// Bubble sort algorithm
void bubbleSort(int targetArray[], int k){

    int sorted = 0;

    while(!isSorted(targetArray, ARRAYLENGTH))
    {

        for(size_t i = 0; i < k - 1; i++)
        {

            if (targetArray[i] > targetArray[i + 1])
            {
                sorted = 0;

                swap((&targetArray[i]), (&targetArray[i + 1]));

            }
            
        }

    }
        
        
    

}
