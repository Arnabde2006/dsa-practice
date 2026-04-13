// Assignment 6 - Problem 4: Quick Sort
// Data Structure Lab using C (BCACC291)
// BCA 2nd SEMESTER

#include<stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];  // Choose last element as pivot
    int i = (low - 1);      // Index of smaller element
    int j;
    
    for(j = low; j < high; j++)
    {
        // If current element is smaller than pivot
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        // Partition the array
        int pi = partition(arr, low, high);
        
        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10];
    int i, n = 10;
    
    printf("Enter 10 numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array: ");
    printArray(arr, n);
    
    quickSort(arr, 0, n-1);
    
    printf("Sorted array (Quick Sort): ");
    printArray(arr, n);
    
    return 0;
}

/*
Test Case:
Input: 64 34 25 12 22 11 90 88 45 50
Output: 11 12 22 25 34 45 50 64 88 90

Algorithm:
- Divide and Conquer approach
- Pick a pivot element
- Partition array around pivot
- Elements smaller than pivot go left
- Elements greater than pivot go right
- Recursively sort left and right subarrays

Time Complexity: 
- Average: O(n log n)
- Worst: O(n²) when array is already sorted
- Best: O(n log n)
Space Complexity: O(log n) due to recursion stack
*/
