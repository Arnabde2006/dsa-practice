// =====================================================================
// ASSIGNMENT 1 - ALL PROGRAMS
// Data Structure Lab using C (BCACC291)
// BCA 2nd SEMESTER
// =====================================================================

// QUESTION 1: Add two distances (feet and inches)
// =====================================================================
#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

void question1() {
    struct Distance d1, d2, sum;
    printf("\n=== QUESTION 1: Add Two Distances ===\n");
    printf("Enter 1st distance (feet inch): ");
    scanf("%d %f", &d1.feet, &d1.inch);
    printf("Enter 2nd distance (feet inch): ");
    scanf("%d %f", &d2.feet, &d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if (sum.inch >= 12.0) {
        sum.feet++;
        sum.inch -= 12.0;
    }

    printf("Sum = %d'-%.1f\"\n", sum.feet, sum.inch);
}

// =====================================================================
// QUESTION 2: Employee Management System
// =====================================================================
struct Employee {
    int emp_no;
    char emp_name[50];
    float salary;
};

void inputEmployee(struct Employee e[], int n) {
    for(int i=0; i<n; i++) {
        printf("\nEnter details for Employee %d:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &e[i].emp_no);
        printf("Employee Name: ");
        scanf("%s", e[i].emp_name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
}

void displayEmployee(struct Employee e[], int n) {
    printf("\n%-10s %-20s %-10s\n", "ID", "Name", "Salary");
    printf("------------------------------------------\n");
    for(int i=0; i<n; i++)
        printf("%-10d %-20s %-10.2f\n", e[i].emp_no, e[i].emp_name, e[i].salary);
}

void question2() {
    struct Employee emp[3];
    int choice;
    
    printf("\n=== QUESTION 2: Employee Management ===\n");
    while(1) {
        printf("\n1. Input Employee Data\n");
        printf("2. Display Employee Data\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: inputEmployee(emp, 3); break;
            case 2: displayEmployee(emp, 3); break;
            case 3: return;
            default: printf("Invalid choice!\n");
        }
    }
}

// =====================================================================
// QUESTION 3: Student Information using Pointer
// =====================================================================
struct Student {
    char name[50];
    int roll;
    float marks;
};

void question3() {
    struct Student s, *ptr;
    ptr = &s;
    
    printf("\n=== QUESTION 3: Student Info (Pointer) ===\n");
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);
    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);
    
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
}

// =====================================================================
// QUESTION 4: Person Information by Passing Structure to Function
// =====================================================================
struct Person {
    char name[50];
    char phone[15];
    int age;
};

void displayPerson(struct Person p) {
    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p.name);
    printf("Phone: %s\n", p.phone);
    printf("Age: %d\n", p.age);
}

void question4() {
    struct Person p1;
    
    printf("\n=== QUESTION 4: Person Info (Pass to Function) ===\n");
    printf("Enter Name: ");
    scanf("%s", p1.name);
    printf("Enter Phone: ");
    scanf("%s", p1.phone);
    printf("Enter Age: ");
    scanf("%d", &p1.age);
    
    displayPerson(p1);
}

// =====================================================================
// QUESTION 5: Birth Date - Calculate Total Days
// =====================================================================
struct DOB {
    int day, month, year;
};

void question5() {
    struct DOB d;
    int total;

    printf("\n=== QUESTION 5: Birth Date Total Days ===\n");
    printf("Enter Day: ");
    scanf("%d", &d.day);
    printf("Enter Month: ");
    scanf("%d", &d.month);
    printf("Enter Year: ");
    scanf("%d", &d.year);

    total = d.year * 365 + d.month * 30 + d.day;

    printf("\nTotal days (approximate) = %d days\n", total);
}

// =====================================================================
// QUESTION 6: Distance between Two Cartesian Points
// =====================================================================
#include <math.h>

struct Point {
    float x, y;
};

void question6() {
    struct Point p1, p2;
    
    printf("\n=== QUESTION 6: Distance Between Points ===\n");
    printf("Enter Point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter Point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    float dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("\nDistance between points: %.2f\n", dist);
}

// =====================================================================
// QUESTION 7: Complex Number Operations (typedef)
// =====================================================================
typedef struct {
    float real;
    float imag;
} complex;

void question7() {
    complex c1, c2, sum, diff;
    
    printf("\n=== QUESTION 7: Complex Number Operations ===\n");
    printf("Enter Complex Number 1 (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter Complex Number 2 (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

    printf("\nSum: %.1f + %.1fi\n", sum.real, sum.imag);
    printf("Difference: %.1f + %.1fi\n", diff.real, diff.imag);
}

// =====================================================================
// QUESTION 8: 12 Students BCT Class Information
// =====================================================================
struct StudentBCT {
    int roll;
    char name[30];
    char address[50];
    int age;
    float avg_marks;
};

void displayStudents(struct StudentBCT s[12]) {
    printf("\n===== BCT CLASS - STUDENT DETAILS =====\n");
    printf("%-6s %-15s %-20s %-5s %-8s\n", "Roll", "Name", "Address", "Age", "Avg Marks");
    printf("---------------------------------------------------------------\n");
    
    for(int i=0; i<12; i++) {
        printf("%-6d %-15s %-20s %-5d %-8.2f\n", 
               s[i].roll, s[i].name, s[i].address, s[i].age, s[i].avg_marks);
    }
}

void question8() {
    struct StudentBCT s[12];

    printf("\n=== QUESTION 8: 12 Students BCT Class ===\n");
    for(int i=0; i<12; i++) {
        printf("\n--- Enter details for Student %d ---\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Address: ");
        scanf("%s", s[i].address);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Average Marks: ");
        scanf("%f", &s[i].avg_marks);
    }

    displayStudents(s);
}

// =====================================================================
// MAIN MENU
// =====================================================================
int main() {
    int choice;
    
    while(1) {
        printf("\n");
        printf("========================================\n");
        printf("  ASSIGNMENT 1 - BCACC291\n");
        printf("  Data Structure Lab using C\n");
        printf("========================================\n");
        printf("1.  Add Two Distances\n");
        printf("2.  Employee Management\n");
        printf("3.  Student Info (Pointer)\n");
        printf("4.  Person Info (Function)\n");
        printf("5.  Birth Date Total Days\n");
        printf("6.  Distance Between Points\n");
        printf("7.  Complex Number Operations\n");
        printf("8.  12 Students BCT Class\n");
        printf("9.  Exit\n");
        printf("========================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: question1(); break;
            case 2: question2(); break;
            case 3: question3(); break;
            case 4: question4(); break;
            case 5: question5(); break;
            case 6: question6(); break;
            case 7: question7(); break;
            case 8: question8(); break;
            case 9: 
                printf("\nThank you! Exiting program...\n");
                return 0;
            default: 
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
