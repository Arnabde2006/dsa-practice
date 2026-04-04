====================================================================
    DATA STRUCTURE LAB - ASSIGNMENT 1
    BCACC291 - BCA 2nd SEMESTER
    INSTITUTE OF ENGINEERING & MANAGEMENT
====================================================================

CONTENTS:
---------
This package contains solutions for all 8 questions from Assignment 1.
Each question is available as both an individual program file and 
included in the combined program.

FILES INCLUDED:
---------------
1. q1_distance.c                - Add two distances (feet & inches)
2. q2_employee.c                - Employee management system
3. q3_student_pointer.c         - Student info using pointers
4. q4_person_function.c         - Person info passing to function
5. q5_birthdate_days.c          - Calculate total days from DOB
6. q6_cartesian_distance.c      - Distance between two points
7. q7_complex_typedef.c         - Complex number operations
8. q8_bct_students.c            - 12 students BCT class records
9. assignment1_all_programs.c   - All programs in one file

====================================================================
QUESTION 1: Add Two Distances
====================================================================

FILE: q1_distance.c

DESCRIPTION:
Program to add two distances entered by the user. Measurement is in 
feet and inches with automatic conversion (12 inches = 1 foot).

STRUCTURE:
struct Distance {
    int feet;
    float inch;
};

KEY FEATURES:
- Handles inch overflow (>= 12 inches converts to feet)
- User-friendly input/output format
- Proper distance addition algorithm

SAMPLE OUTPUT:
Enter 1st distance
Feet: 5
Inches: 9.5

Enter 2nd distance  
Feet: 3
Inches: 6.2

Result:
Sum = 9 feet 3.7 inches

COMPILATION:
gcc q1_distance.c -o q1
./q1

====================================================================
QUESTION 2: Employee Management System
====================================================================

FILE: q2_employee.c

DESCRIPTION:
Define employee data type with emp_no, emp_name, and salary using 
structure. Take input for 3 employees and display data using separate 
functions with switch case menu.

STRUCTURE:
struct Employee {
    int emp_no;
    char emp_name[50];
    float salary;
};

FUNCTIONS:
- void input(struct Employee e[], int n)
- void display(struct Employee e[], int n)

MENU OPTIONS:
1. Input Employee Data
2. Display Employee Data  
3. Exit

COMPILATION:
gcc q2_employee.c -o q2
./q2

====================================================================
QUESTION 3: Student Information using Pointer
====================================================================

FILE: q3_student_pointer.c

DESCRIPTION:
Store student information (name, roll, marks) using structure with 
pointer variable to access structure members.

KEY CONCEPTS:
- Structure pointer: struct Student *ptr;
- Arrow operator: ptr->name
- Accessing via pointer

COMPILATION:
gcc q3_student_pointer.c -o q3
./q3

====================================================================
QUESTION 4: Person Information - Pass to Function
====================================================================

FILE: q4_person_function.c

DESCRIPTION:
Store person information and pass structure to function for display.

FUNCTION:
void display(struct Person p)

COMPILATION:
gcc q4_person_function.c -o q4
./q4

====================================================================
QUESTION 5: Birth Date Total Days
====================================================================

FILE: q5_birthdate_days.c

DESCRIPTION:
Calculate total days from birth date (approximate calculation).

FORMULA:
Total = (year × 365) + (month × 30) + day

COMPILATION:
gcc q5_birthdate_days.c -o q5
./q5

====================================================================
QUESTION 6: Distance Between Cartesian Points
====================================================================

FILE: q6_cartesian_distance.c

DESCRIPTION:
Calculate distance between two coordinate points.

FORMULA:
Distance = √[(x2-x1)² + (y2-y1)²]

COMPILATION:
gcc q6_cartesian_distance.c -o q6 -lm
./q6

NOTE: Use -lm flag for math library

====================================================================
QUESTION 7: Complex Number Operations
====================================================================

FILE: q7_complex_typedef.c

DESCRIPTION:
Complex number addition and subtraction using typedef.

typedef struct {
    float real;
    float imag;
} complex;

COMPILATION:
gcc q7_complex_typedef.c -o q7
./q7

====================================================================
QUESTION 8: BCT Class - 12 Students
====================================================================

FILE: q8_bct_students.c

DESCRIPTION:
Store and display information for 12 BCT students.

COMPILATION:
gcc q8_bct_students.c -o q8
./q8

====================================================================
COMBINED PROGRAM
====================================================================

FILE: assignment1_all_programs.c

All 8 programs in one menu-driven application.

COMPILATION:
gcc assignment1_all_programs.c -o assignment1 -lm
./assignment1

====================================================================
