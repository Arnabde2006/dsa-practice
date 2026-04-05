    DATA STRUCTURE LAB ASSIGNMENT 2 - SOLUTIONS
    BCACC291 - BCA 2nd SEMESTER

This document contains solutions for all three assignment questions.

--------------------------------------------------------------------
QUESTION 1: Stack Operations using Array and Switch Case
--------------------------------------------------------------------

PROGRAM: question1_stack.c

DESCRIPTION:
This program implements a stack data structure using an array with the 
following operations:
- Push (Insert): Add elements to the stack
- Pop (Delete): Remove elements from the stack
- Display: Show all elements in the stack
- Exit: Terminate the program

KEY FEATURES:
- Uses array-based implementation
- Maximum capacity of 100 elements
- Menu-driven interface using switch case
- Overflow and underflow checking

SAMPLE OUTPUT:
=== STACK OPERATIONS ===
1. Push (Insert)
2. Pop (Delete)
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 10
Value 10 pushed successfully!

Enter your choice: 1
Enter value to push: 20
Value 20 pushed successfully!

Enter your choice: 3
Stack elements (top to bottom):
20
10

Enter your choice: 2
Popped value: 20

--------------------------------------------------------------------
QUESTION 2: Student Record Management using Stack
--------------------------------------------------------------------

PROGRAM: question2_student_stack.c

DESCRIPTION:
This program implements a complete student record management system 
using stack data structure with the following features:

a) Stack operations to store, delete, and display student records
b) Display list of students roll-wise
c) Calculate total marks (English + Maths) for each student
d) Display students in descending order of marks

STRUCTURE DEFINITION:
struct student {
    int roll;
    char std_name[50];
    float maths_marks;
    float english_marks;
    int rank;
};

KEY FEATURES:
- Menu-driven interface with 7 options
- Push/Pop operations for student records
- Roll-wise listing
- Total marks calculation
- Sorting students by total marks (descending order)
- Maximum 50 student records

MENU OPTIONS:
1. Add Student Record (Push)
2. Delete Student Record (Pop)
3. Display All Records
4. Display Roll-wise List
5. Calculate Total Marks
6. Display Students by Descending Order of Marks
7. Exit

SAMPLE OUTPUT:
========== STUDENT RECORD MANAGEMENT ==========
1. Add Student Record (Push)
Enter your choice: 1

Enter details for student 1:
Roll Number: 101
Student Name: Alice
Maths Marks: 85.5
English Marks: 90.0
Record added successfully!

Enter your choice: 1
Enter details for student 2:
Roll Number: 102
Student Name: Bob
Maths Marks: 78.0
English Marks: 82.5
Record added successfully!

Enter your choice: 5
===== TOTAL MARKS =====
Roll       Name                 Total     
------------------------------------------
102        Bob                  160.50    
101        Alice                175.50    

Enter your choice: 6
===== STUDENTS BY DESCENDING ORDER OF MARKS =====
Rank       Roll       Name                 Total      Marks
------------------------------------------------------------
1          101        Alice                175.50     (M:85.50, E:90.00)
2          102        Bob                  160.50     (M:78.00, E:82.50)

--------------------------------------------------------------------
QUESTION 3: String Reversal using Stack
--------------------------------------------------------------------

PROGRAM: question3_string_reverse.c

DESCRIPTION:
This program reverses a string using stack data structure. It 
demonstrates the LIFO (Last In First Out) principle of stacks.

ALGORITHM:
1. Read input string from user
2. Push each character onto the stack
3. Pop each character from the stack
4. Characters come out in reverse order
5. Display the reversed string

KEY FEATURES:
- Character-by-character push operation
- Visual representation of push/pop operations
- Maximum string length: 100 characters

SAMPLE OUTPUT:
===== STRING REVERSAL USING STACK =====
Enter a string: HELLO

Original String: HELLO

Pushing characters onto stack...
Pushed: H
Pushed: E
Pushed: L
Pushed: L
Pushed: O

Popping characters from stack...
Popped: O
Popped: L
Popped: L
Popped: E
Popped: H

Reversed String: OLLEH

--------------------------------------------------------------------
COMPILATION AND EXECUTION INSTRUCTIONS
--------------------------------------------------------------------

To compile and run these programs:

1. Question 1:
   gcc question1_stack.c -o question1
   ./question1

2. Question 2:
   gcc question2_student_stack.c -o question2
   ./question2

3. Question 3:
   gcc question3_string_reverse.c -o question3
   ./question3

--------------------------------------------------------------------
IMPORTANT CONCEPTS COVERED
--------------------------------------------------------------------

1. Stack Data Structure
   - LIFO (Last In First Out) principle
   - Push and Pop operations
   - Stack overflow and underflow conditions

2. Structure in C
   - User-defined data types
   - Structure variables and arrays
   - Accessing structure members

3. Array Implementation
   - Fixed-size stack using arrays
   - Index-based element access

4. Switch Case
   - Menu-driven programs
   - Multiple choice handling

5. Sorting Algorithms
   - Bubble sort for descending order
   - Comparison of structure elements

--------------------------------------------------------------------
NOTES
--------------------------------------------------------------------

- All programs include proper error handling
- Overflow and underflow conditions are checked
- Programs use meaningful variable names
- Code is well-commented for better understanding
- Each program can be compiled and run independently

--------------------------------------------------------------------
AUTHOR: Arnab De
DATE: February 2026
--------------------------------------------------------------------
