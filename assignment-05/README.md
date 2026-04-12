ASSIGNMENT 5 - Data Structure Lab (BCACC291)
BCA 2nd Semester
==============================================

Files:
------
q1_sum_queue.c         - Sum of queue elements
q2_avg_queue.c         - Average of queue elements
q3_max_queue.c         - Maximum element in queue
q4_min_queue.c         - Minimum element in queue
q5_count_queue.c       - Count elements in queue

==============================================

Q1: Sum of Queue Elements
--------------------------
Calculates sum of all elements in queue
Loops through queue from front to rear
Adds all elements together

Example:
Queue: 10 20 30 40
Sum: 100

Compile: gcc q1_sum_queue.c -o q1
Run: ./q1

==============================================

Q2: Average of Queue Elements
------------------------------
Calculates average value of queue elements
Sum of all elements / Count of elements
Returns float value

Example:
Queue: 10 20 30 40
Average: 25.00

Compile: gcc q2_avg_queue.c -o q2
Run: ./q2

==============================================

Q3: Maximum Element in Queue
-----------------------------
Finds largest element in queue
Assumes first element as max
Compares with remaining elements

Example:
Queue: 10 50 30 20 40
Maximum: 50

Compile: gcc q3_max_queue.c -o q3
Run: ./q3

==============================================

Q4: Minimum Element in Queue
-----------------------------
Finds smallest element in queue
Assumes first element as min
Compares with remaining elements

Example:
Queue: 10 50 30 5 40
Minimum: 5

Compile: gcc q4_min_queue.c -o q4
Run: ./q4

==============================================

Q5: Count Elements in Queue
----------------------------
Counts total elements in queue
Uses formula: rear - front + 1
Quick calculation method

Example:
Queue: 10 20 30 40 50
Count: 5

Compile: gcc q5_count_queue.c -o q5
Run: ./q5

==============================================

Common Features:
- All use linear queue
- Enqueue operation to add elements
- Display to show queue contents
- Menu-driven interface
- MAX size = 50

==============================================

Testing:
1. First add elements using Enqueue
2. Then perform the calculation
3. Try with different values
4. Check empty queue case

==============================================
