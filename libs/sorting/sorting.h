#ifndef _LIB_SORT

#define ARRAYLENGTH 1000000

#if ARRAYLENGTH > 2147483647
    #define ARRAYLENGTH 2147483647
    #endif

void swap(int *a, int *b);
void printArray(int targetArray[], int k);
void populateArray(int targetArray[],int k);
int isSorted(int targetArray[], int k);
void randomize (int arr[], int n);
int shellSort(int targetArray[], int k);
int partition(int targetArray[], int low, int high);
int hoarePartition(int targetArray[], int low, int high);
void quickSort(int targetArray[], int low, int high);
void quickSortHoare(int targetArray[], int low, int high);
void insertionSort(int targetArray[], int k);
void bubbleSort(int targetArray[], int k);

#endif //_LIB_SORT