#include <stdio.h>


void linearSearchWithOccurrence(int arr[], int n, int key) {
    int count = 0;
    int positions[10];  
    

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            positions[count] = i;
            count++;
        }
    }
    
    printf("\n_____________________________________________\n");
    if (count > 0) {
        printf("SUCCESS: Element %d found %d time(s)\n", key, count);
        printf("----------------------------------------\n");
        printf("Occurrence Details:\n");
        for (int i = 0; i < count; i++) {
            printf("  Occurrence %d: Position %d (Index %d)\n", 
                   i + 1, positions[i] + 1, positions[i]);
        }
    } else {
        printf("NOT FOUND: Element %d is not in the array\n", key);
    }
    printf("_________________________________\n");
}

int main() {
    int arr[10], key;
    
    printf("  LINEAR SEARCH WITH OCCURRENCE COUNT\n");
    
    printf("Enter 10 numbers (duplicates allowed):\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Display the entered array
    printf("\nArray entered: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("\nEnter the number to search: ");
    scanf("%d", &key);
    
    linearSearchWithOccurrence(arr, 10, key);
    
    return 0;
}

