#include <stdio.h>

int main() {
    int arr[100], n, num, i, pos;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements in sorted order:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
 
    printf("\n\nEnter element to insert: ");
    scanf("%d", &num);
    
    // Find position to insert
    pos = 0;
    for(i=0; i<n; i++) {
        if(arr[i] < num) {
            pos++;
        } else {
            break;
        }
    }
    
    // Shift elements to right
    for(i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }
    
    // Insert element
    arr[pos] = num;
    n++;
    
    printf("\nArray after insertion: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
