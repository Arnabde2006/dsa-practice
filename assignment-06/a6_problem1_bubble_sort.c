// Assignment 6 - Problem 1: Bubble Sort
#include<stdio.h>
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    
    bubbleSort(arr, n);
    
    printf("Sorted array (Bubble Sort): ");
    printArray(arr, n);
    
    return 0;
}

/*
Test Case:
Input: 64 34 25 12 22 11 90 88 45 50
Output: 11 12 22 25 34 45 50 64 88 90

Algorithm:
- Compare adjacent elements
- Swap if they are in wrong order
- Repeat until array is sorted
- Number of passes = n-1
- Comparisons in each pass = n-i-1

Time Complexity: O(n²)
Space Complexity: O(1)
*/
