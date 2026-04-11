ASSIGNMENT 3 - Data Structure Lab (BCACC291)
BCA 2nd Semester
==============================================

Files:
------
q1_linear_queue.c      - Linear queue operations
q2_circular_queue.c    - Circular queue operations  
q3_dequeue.c           - Dequeue operations
q4_reverse_array.c     - Reverse array elements
q5_sorted_insert.c     - Insert in sorted array

==============================================

Q1: Linear Queue
----------------
Operations: Enqueue, Dequeue, Display
- Enqueue adds at rear
- Dequeue removes from front
- FIFO principle

Compile: gcc q1_linear_queue.c -o q1
Run: ./q1

==============================================

Q2: Circular Queue
------------------
Operations: Enqueue, Dequeue, Display
- Uses circular array concept
- Rear wraps around to start
- Better space utilization

Compile: gcc q2_circular_queue.c -o q2
Run: ./q2

==============================================

Q3: Dequeue (Double Ended Queue)
---------------------------------
Operations:
- Insert Front
- Insert Rear
- Delete Front
- Delete Rear
- Display

Can insert/delete from both ends

Compile: gcc q3_dequeue.c -o q3
Run: ./q3

==============================================

Q4: Reverse Array
-----------------
Takes array input and reverses it
Uses swapping technique
First element swaps with last, etc.

Example:
Input: 1 2 3 4 5
Output: 5 4 3 2 1

Compile: gcc q4_reverse_array.c -o q4
Run: ./q4

==============================================

Q5: Insert in Sorted Array
---------------------------
Insert element in sorted array maintaining order
Finds correct position
Shifts elements to make space
Inserts new element

Example:
Array: 1 3 5 7 9
Insert: 6
Result: 1 3 5 6 7 9

Compile: gcc q5_sorted_insert.c -o q5
Run: ./q5

==============================================

Notes:
- All programs use array implementation
- MAX size is 50 or 100
- Switch case menus used where needed
- Simple error checking included

==============================================
