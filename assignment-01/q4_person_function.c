#include <stdio.h>

struct Person {
    char name[50];
    char phone[15];
    int age;
};

// Function to display person information
// Structure is passed as parameter
void display(struct Person p) {
    printf("\n========================================\n");
    printf("       PERSON INFORMATION\n");
    printf("========================================\n");
    printf("Name         : %s\n", p.name);
    printf("Phone Number : %s\n", p.phone);
    printf("Age          : %d years\n", p.age);
    printf("========================================\n");
}

int main() {
    struct Person p1;
    
    printf("=== Person Information System ===\n");
    printf("(Passing Structure to Function)\n\n");
    
    printf("Enter Name: ");
    scanf("%s", p1.name);
    
    printf("Enter Phone Number: ");
    scanf("%s", p1.phone);
    
    printf("Enter Age: ");
    scanf("%d", &p1.age);
    
    // Pass structure to function
    display(p1);
    
    return 0;
}
