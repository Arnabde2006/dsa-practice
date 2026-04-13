// Assignment 6 - Problem 3: Selection Sort

#include<stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;
    
    for(i = 0; i < n-1; i++)
    {
        min_idx = i;
        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        
        if(min_idx != i)
        {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
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
    
    selectionSort(arr, n);
    
    printf("Sorted array (Selection Sort): ");
    printArray(arr, n);
    
    return 0;
}

/*
Test Case:
Input: 64 34 25 12 22 11 90 88 45 50
Output: 11 12 22 25 34 45 50 64 88 90

*/
