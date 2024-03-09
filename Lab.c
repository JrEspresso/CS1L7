#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 9

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

int bubbleSort(int arr[], int n)
{
    int i, j;
    int swaps = 0;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
                swaps++;
                
            }
        }

        if (swapped == false)
            break;
    }
    return swaps;
}

int selectionSort(int arr[], int n, int arrNums[]) 
{ 
    int i, j, min_idx;
    int swaps = 0;
     
  
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
           if(min_idx != i) 
            swap(&arr[min_idx], &arr[i]); 
            swaps++;

    }
    return swaps; 
} 

int main() {
    int arr1BSwap, arr2BSwap, arr1SSwap, arr2SSwap;
    int arr1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int arr1Nums[100];
    int arr2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int arr2Nums[100];
    arr1BSwap = bubbleSort(arr1, ARRAY_SIZE);
    printf("BubbleSort Swaps for Array 1: %d\n", arr1BSwap);
    arr2BSwap = bubbleSort(arr2, ARRAY_SIZE);
    printf("BubbleSort Swaps for Array 2: %d\n", arr2BSwap);
    arr1SSwap = selectionSort(arr1, ARRAY_SIZE, arr1Nums);
    printf("SelectionSort Swaps for Array 1: %d\n", arr1SSwap);
    arr2SSwap = selectionSort(arr2, ARRAY_SIZE, arr2Nums);
    printf("SelectionSort Swaps for Array 2: %d\n", arr2SSwap);

    return 0;
}