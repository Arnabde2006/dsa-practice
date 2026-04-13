// Assignment 6 - Problem 2: Insertion Sort
// Data Structure Lab using C (BCACC291)
// BCA 2nd SEMESTER

#include<stdio.h>

void insertionSort(int arr[], int n)
{
    int i, j, key;
    
    // Start from second element
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        
        // Move elements greater than key one position ahead
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
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
    
    insertionSort(arr, n);
    
    printf("Sorted array (Insertion Sort): ");
    printArray(arr, n);
    
    return 0;
}

/*
Test Case:
Input: 64 34 25 12 22 11 90 88 45 50
Output: 11 12 22 25 34 45 50 64 88 90

Algorithm:
- Build sorted array one element at a time
- Take each element and insert it at correct position
- Elements on left are already sorted
- Similar to sorting playing cards in hand

Time Complexity: O(n²)
Best Case: O(n) when array is already sorted
Space Complexity: O(1)
*/
