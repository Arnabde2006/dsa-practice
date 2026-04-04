#include <stdio.h>

struct Employee {
    int emp_no;
    char emp_name[50];
    float salary;
};

// Function to input employee data
void input(struct Employee e[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &e[i].emp_no);
        printf("Employee Name: ");
        scanf("%s", e[i].emp_name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    printf("\nData entered successfully!\n");
}

// Function to display employee data
void display(struct Employee e[], int n) {
    printf("\n===== EMPLOYEE RECORDS =====\n");
    printf("%-10s %-20s %-12s\n", "Emp ID", "Name", "Salary");
    printf("--------------------------------------------\n");
    for(int i = 0; i < n; i++) {
        printf("%-10d %-20s %-12.2f\n", e[i].emp_no, e[i].emp_name, e[i].salary);
    }
}

int main() {
    struct Employee emp[3];
    int choice;
    int data_entered = 0;
    
    while(1) {
        printf("\n========================================\n");
        printf("    EMPLOYEE MANAGEMENT SYSTEM\n");
        printf("========================================\n");
        printf("1. Input Employee Data\n");
        printf("2. Display Employee Data\n");
        printf("3. Exit\n");
        printf("========================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: 
                input(emp, 3);
                data_entered = 1;
                break;
            case 2: 
                if(data_entered) {
                    display(emp, 3);
                } else {
                    printf("\nNo data available! Please input data first.\n");
                }
                break;
            case 3: 
                printf("\nExiting program. Thank you!\n");
                return 0;
            default: 
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
