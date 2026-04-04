#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s, *ptr;
    
    // Pointer points to structure variable
    ptr = &s;
    
    printf("=== Student Information System ===\n");
    printf("(Using Pointer Variable)\n\n");
    
    // Input using pointer
    printf("Enter Student Name: ");
    scanf("%s", ptr->name);
    
    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);
    
    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);
    
    // Display using pointer
    printf("\n========================================\n");
    printf("       STUDENT DETAILS\n");
    printf("========================================\n");
    printf("Name         : %s\n", ptr->name);
    printf("Roll Number  : %d\n", ptr->roll);
    printf("Marks        : %.2f\n", ptr->marks);
    printf("========================================\n");
    
    // Alternate display showing pointer access
    printf("\nAccessing via pointer:\n");
    printf("Data: %s, Roll: %d, Marks: %.2f\n", ptr->name, ptr->roll, ptr->marks);
    
    return 0;
}
