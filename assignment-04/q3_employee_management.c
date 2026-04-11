/*
 * Assignment 4 - Question 3
 * Employee Management System using Structure
 * 
 * Features:
 * - User-defined data type "employee" with fields: emp_no, emp_name, salary
 * - Input data for 3 employees
 * - Search and display employee by emp_no
 * - Separate functions for input and display
 * - Menu-driven interface using switch-case
 */

#include <stdio.h>
#include <string.h>

// Define employee structure (user-defined data type)
typedef struct {
    int emp_no;
    char emp_name[50];
    float salary;
} Employee;

// Function to input employee data
void inputEmployee(Employee emp[], int n) {
   
    printf("        INPUT EMPLOYEE DATA\n");
    
    
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Employee %d ---\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &emp[i].emp_no);
        printf("Employee Name: ");
        scanf(" %[^\n]", emp[i].emp_name);  // Read string with spaces
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    
    printf("\n✓ Employee data entered successfully!\n");
}

// Function to display single employee
void displayEmployee(Employee e) {
    printf("\n========================================\n");
    printf("Employee Number : %d\n", e.emp_no);
    printf("Employee Name   : %s\n", e.emp_name);
    printf("Salary          : Rs. %.2f\n", e.salary);
    printf("========================================\n");
}

// Function to display all employees
void displayAllEmployees(Employee emp[], int n) {
    printf("\n========================================\n");
    printf("      ALL EMPLOYEE RECORDS\n");
    printf("========================================\n");
    
    for (int i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);
        printf("Employee Number : %d\n", emp[i].emp_no);
        printf("Employee Name   : %s\n", emp[i].emp_name);
        printf("Salary          : Rs. %.2f\n", emp[i].salary);
    }
    printf("\n========================================\n");
}

// Function to search employee by emp_no
void searchEmployee(Employee emp[], int n, int emp_no) {
    int found = 0;
    
    for (int i = 0; i < n; i++) {
        if (emp[i].emp_no == emp_no) {
            printf("\n✓ Employee Found!\n");
            displayEmployee(emp[i]);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("\n✗ Employee with number %d not found!\n", emp_no);
    }
}

int main() {
    Employee emp[3];
    int choice, emp_no;
    int dataEntered = 0;  // Flag to check if data is entered
    
    while (1) {
       
        printf("    EMPLOYEE MANAGEMENT SYSTEM\n");
        
        printf("1. Input Employee Data\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by Number\n");
        printf("4. Exit\n");
        
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        
        // Switch-case for menu options
        switch (choice) {
            case 1:
                // Input employee data
                inputEmployee(emp, 3);
                dataEntered = 1;
                break;
                
            case 2:
                // Display all employees
                if (!dataEntered) {
                    printf("\n✗ No data entered yet! Please enter data first (Option 1).\n");
                } else {
                    displayAllEmployees(emp, 3);
                }
                break;
                
            case 3:
                // Search employee by emp_no
                if (!dataEntered) {
                    printf("\n✗ No data entered yet! Please enter data first (Option 1).\n");
                } else {
                    printf("\nEnter employee number to search: ");
                    scanf("%d", &emp_no);
                    searchEmployee(emp, 3, emp_no);
                }
                break;
                
            case 4:
                // Exit program
                printf("\n========================================\n");
                printf("  Thank you for using the system!\n");
                printf("  Exiting program...\n");
                printf("========================================\n");
                return 0;
                
            default:
                // Invalid choice
                printf("\n✗ Invalid choice! Please enter a number between 1-4.\n");
        }
    }
    
    return 0;
}

/*
 * Sample Run:
 * ========================================
 *     EMPLOYEE MANAGEMENT SYSTEM
 * ========================================
 * 1. Input Employee Data
 * 2. Display All Employees
 * 3. Search Employee by Number
 * 4. Exit
 * ========================================
 * Enter your choice (1-4): 1
 * 
 * ========================================
 *         INPUT EMPLOYEE DATA
 * ========================================
 * 
 * --- Enter details for Employee 1 ---
 * Employee Number: 101
 * Employee Name: John Smith
 * Salary: 45000
 * 
 * --- Enter details for Employee 2 ---
 * Employee Number: 102
 * Employee Name: Sarah Johnson
 * Salary: 52000
 * 
 * --- Enter details for Employee 3 ---
 * Employee Number: 103
 * Employee Name: Michael Brown
 * Salary: 48000
 * 
 * ✓ Employee data entered successfully!
 * 
 * ========================================
 *     EMPLOYEE MANAGEMENT SYSTEM
 * ========================================
 * 1. Input Employee Data
 * 2. Display All Employees
 * 3. Search Employee by Number
 * 4. Exit
 * ========================================
 * Enter your choice (1-4): 3
 * 
 * Enter employee number to search: 102
 * 
 * ✓ Employee Found!
 * 
 * ========================================
 * Employee Number : 102
 * Employee Name   : Sarah Johnson
 * Salary          : Rs. 52000.00
 * ========================================
 */
