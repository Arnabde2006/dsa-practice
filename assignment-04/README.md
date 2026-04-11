
                    ASSIGNMENT 4 - DATA STRUCTURE LAB
                          BCACC291 - BCA 2nd Semester

CONTENTS:
---------
1. q1_linear_search.c              - Linear Search (10 distinct numbers)
2. q2_linear_search_occurrence.c   - Linear Search with occurrence count
3. q3_employee_management.c        - Employee Management System (Structure)
4. q4_binary_search.c              - Binary Search (requires sorted array)


COMPILATION & EXECUTION:
------------------------

For Linux/Mac (GCC):
-------------------
# Question 1
gcc q1_linear_search.c -o q1_linear_search
./q1_linear_search

# Question 2
gcc q2_linear_search_occurrence.c -o q2_linear_search_occurrence
./q2_linear_search_occurrence

# Question 3
gcc q3_employee_management.c -o q3_employee_management
./q3_employee_management

# Question 4
gcc q4_binary_search.c -o q4_binary_search
./q4_binary_search


For Windows (MinGW/GCC):
-----------------------
# Question 1
gcc q1_linear_search.c -o q1_linear_search.exe
q1_linear_search.exe

# Question 2
gcc q2_linear_search_occurrence.c -o q2_linear_search_occurrence.exe
q2_linear_search_occurrence.exe

# Question 3
gcc q3_employee_management.c -o q3_employee_management.exe
q3_employee_management.exe

# Question 4
gcc q4_binary_search.c -o q4_binary_search.exe
q4_binary_search.exe


For Online Compilers (OnlineGDB, Programiz, etc.):
--------------------------------------------------
1. Copy the entire content of the .c file
2. Paste into the online editor
3. Click "Run" or "Compile & Run"


PROGRAM DESCRIPTIONS:
---------------------

Question 1: Linear Search
-------------------------
- Searches a number from 10 distinct numbers
- Uses sequential search algorithm
- Time Complexity: O(n)
- Returns position and index of found element

Test Data:
Array: 23, 45, 12, 67, 89, 34, 56, 78, 90, 11
Search: 56
Expected Output: Found at position 7 (index 6)


Question 2: Linear Search with Occurrence Count
-----------------------------------------------
- Searches and counts ALL occurrences of a number
- Allows duplicate values in the array
- Displays all positions where element is found
- Useful for datasets with repeated values

Test Data:
Array: 12, 45, 12, 67, 12, 89, 34, 45, 12, 78
Search: 12
Expected Output: Found 4 times at positions 1, 3, 5, 9


Question 3: Employee Management System
--------------------------------------
- User-defined structure with fields: emp_no, emp_name, salary
- Menu-driven interface (switch-case)
- Separate functions for input and display
- Search employee by employee number

Features:
✓ Input data for 3 employees
✓ Display all employees
✓ Search by employee number
✓ Data validation

Test Data:
Employee 1: 101, John Smith, 45000
Employee 2: 102, Sarah Johnson, 52000
Employee 3: 103, Michael Brown, 48000
Search: 102
Expected Output: Display details of Sarah Johnson


Question 4: Binary Search
-------------------------
- Searches using divide-and-conquer algorithm
- REQUIRES SORTED ARRAY (includes sorting function)
- Time Complexity: O(log n) - Much faster than linear search
- Shows both original and sorted array

Test Data:
Array: 64, 25, 12, 22, 11, 90, 88, 45, 50, 32
After Sorting: 11, 12, 22, 25, 32, 45, 50, 64, 88, 90
Search: 45
Expected Output: Found at position 6 (index 5) in sorted array


KEY CONCEPTS:
-------------

1. Linear Search:
   - Simple sequential search
   - Works on unsorted arrays
   - Best for small datasets
   - Time: O(n)

2. Binary Search:
   - Divide and conquer
   - REQUIRES sorted array
   - Very fast for large datasets
   - Time: O(log n)

3. Structures:
   - User-defined data types
   - Group related data together
   - Use typedef for cleaner code
   - Access members using dot operator

4. Functions:
   - Modular programming
   - Code reusability
   - Easier debugging
   - Better organization


COMMON ERRORS & SOLUTIONS:
--------------------------

Error: "undefined reference to main"
Solution: Make sure main() function exists

Error: "scanf format error"
Solution: Use correct format specifiers (%d for int, %f for float, %s for string)

Error: "array index out of bounds"
Solution: Check array limits (0 to n-1)

Error: Binary search not finding element
Solution: Make sure array is sorted first

Error: Structure member not accessible
Solution: Use dot operator (emp.emp_no) or arrow for pointers (emp->emp_no)


TIPS FOR SUCCESS:
-----------------

1. Always initialize variables before use
2. Check array bounds (0 to n-1)
3. Use meaningful variable names
4. Add comments to explain logic
5. Test with different inputs
6. Handle edge cases (empty array, single element)
7. Sort array before binary search
8. Validate user input
9. Use proper format specifiers in scanf/printf
10. Free any dynamically allocated memory (if used)


ALGORITHM COMPARISON:
--------------------

┌──────────────────┬─────────────────┬─────────────────┐
│ Search Algorithm │ Linear Search   │ Binary Search   │
├──────────────────┼─────────────────┼─────────────────┤
│ Time Complexity  │ O(n)            │ O(log n)        │
│ Space Complexity │ O(1)            │ O(1)            │
│ Prerequisite     │ None            │ Sorted array    │
│ Best for         │ Small/unsorted  │ Large/sorted    │
│ Comparisons(n=10)│ Up to 10        │ Up to 4         │
│ Comparisons(n=100)│ Up to 100      │ Up to 7         │
└──────────────────┴─────────────────┴─────────────────┘


CONTACT & SUPPORT:
------------------
For questions or issues, please contact your lab instructor.

Institute of Engineering & Management
Data Structure Lab (BCACC291)
BCA 2nd Semester

================================================================================
                              END OF README
================================================================================
