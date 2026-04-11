/*
 * Assignment 4 - Question 1
 * Linear Search: Search a number from 10 distinct numbers
 */

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;  // Return index if found
    }
    return -1;  // Return -1 if not found
}

int main() {
    int arr[10], key, result;
    
    printf("   LINEAR SEARCH - 10 DISTINCT NUMBERS\n");
    printf("Enter 10 distinct numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the number to search: ");
    scanf("%d", &key);
    
    result = linearSearch(arr, 10, key);
    
    printf("\n========================================\n");
    if (result != -1) {
        printf("SUCCESS: Element %d found!\n", key);
        
    } else {
        printf("NOT FOUND: Element %d is not in the array\n", key);
    }
    printf("========================================\n");
    
    return 0;
}

/*
 * Sample Run:
 * ========================================
 *    LINEAR SEARCH - 10 DISTINCT NUMBERS
 * ========================================
 * 
 * Enter 10 distinct numbers:
 * Element 1: 23
 * Element 2: 45
 * Element 3: 12
 * Element 4: 67
 * Element 5: 89
 * Element 6: 34
 * Element 7: 56
 * Element 8: 78
 * Element 9: 90
 * Element 10: 11
 * 
 * Enter the number to search: 56
 * 
 * ========================================
 * SUCCESS: Element 56 found!
 * Position: 7 (1-based indexing)
 * Index: 6 (0-based indexing)
 * ========================================
 */
