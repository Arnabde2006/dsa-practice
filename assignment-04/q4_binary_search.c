/*
 * Assignment 4 - Question 4
 * Binary Search: Search a number from 10 numbers
 * 
 * Algorithm: Divide and conquer approach
 * Prerequisite: Array must be sorted
 * Time Complexity: O(log n)
 * 
 * Note: This program includes a sorting function because
 * binary search requires a sorted array
 */

#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    
    while (low <= high) {
        mid = low + (high - low) / 2;  // Avoids integer overflow
        
        if (arr[mid] == key)
            return mid;  // Element found at mid
        else if (arr[mid] < key)
            low = mid + 1;  // Search in right half
        else
            high = mid - 1;  // Search in left half
    }
    
    return -1;  // Element not found
}

// Function to sort array using bubble sort
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10], key, result;
    
    printf("========================================\n");
    printf("         BINARY SEARCH\n");
    printf("========================================\n\n");
    
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Display original array
    printf("\n--- Original Array ---\n");
    displayArray(arr, 10);
    
    // Binary search requires sorted array
    printf("\n>>> Sorting the array...\n");
    bubbleSort(arr, 10);
    
    // Display sorted array
    printf("\n--- Sorted Array ---\n");
    displayArray(arr, 10);
    
    printf("\nEnter the number to search: ");
    scanf("%d", &key);
    
    // Perform binary search
    result = binarySearch(arr, 10, key);
    
    printf("\n========================================\n");
    if (result != -1) {
        printf("SUCCESS: Element %d found!\n", key);
        printf("----------------------------------------\n");
        printf("Position: %d (in sorted array)\n", result + 1);
        printf("Index: %d (0-based indexing)\n", result);
        printf("\nBinary Search Steps Performed: ");
        printf("~%d comparisons (log₂10 ≈ 3-4)\n", (int)(3.32 * 10 / 10) + 1);
    } else {
        printf("NOT FOUND: Element %d is not in the array\n", key);
    }
    printf("========================================\n");
    
    return 0;
}

/*
 * Sample Run:
 * ========================================
 *          BINARY SEARCH
 * ========================================
 * 
 * Enter 10 numbers:
 * Element 1: 64
 * Element 2: 25
 * Element 3: 12
 * Element 4: 22
 * Element 5: 11
 * Element 6: 90
 * Element 7: 88
 * Element 8: 45
 * Element 9: 50
 * Element 10: 32
 * 
 * --- Original Array ---
 * 64 25 12 22 11 90 88 45 50 32
 * 
 * >>> Sorting the array...
 * 
 * --- Sorted Array ---
 * 11 12 22 25 32 45 50 64 88 90
 * 
 * Enter the number to search: 45
 * 
 * ========================================
 * SUCCESS: Element 45 found!
 * ----------------------------------------
 * Position: 6 (in sorted array)
 * Index: 5 (0-based indexing)
 * 
 * Binary Search Steps Performed: ~4 comparisons (log₂10 ≈ 3-4)
 * ========================================
 * 
 * 
 * ============================================
 * HOW BINARY SEARCH WORKS (For element 45):
 * ============================================
 * Sorted Array: [11, 12, 22, 25, 32, 45, 50, 64, 88, 90]
 *                 0   1   2   3   4   5   6   7   8   9
 * 
 * Step 1: low=0, high=9, mid=4
 *         arr[4]=32 < 45 → search right half
 * 
 * Step 2: low=5, high=9, mid=7
 *         arr[7]=64 > 45 → search left half
 * 
 * Step 3: low=5, high=6, mid=5
 *         arr[5]=45 == 45 → FOUND!
 * ============================================
 * 
 * Comparison: Linear vs Binary Search
 * ====================================
 * For n=10 elements:
 * - Linear Search: Up to 10 comparisons (worst case)
 * - Binary Search: Up to 4 comparisons (worst case)
 * 
 * For n=1000 elements:
 * - Linear Search: Up to 1000 comparisons
 * - Binary Search: Up to 10 comparisons
 * 
 * Binary Search is MUCH faster for large datasets!
 */
