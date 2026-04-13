# Data Structure Lab using C (BCACC291)
## BCA 2nd SEMESTER - ASSIGNMENT 6

---

## Overview

This assignment implements four fundamental sorting algorithms in C:
1. Bubble Sort
2. Insertion Sort
3. Selection Sort
4. Quick Sort

All programs sort 10 numbers entered by the user.

---

## Problem 1: Bubble Sort

**Algorithm:**
- Compare adjacent elements repeatedly
- Swap if they are in wrong order
- After each pass, largest element moves to end
- Continue until no swaps are needed

**Key Points:**
- Number of passes: n-1
- Comparisons in each pass: n-i-1
- Simple but inefficient for large datasets

**Time Complexity:**
- Best Case: O(n) - when already sorted
- Average Case: O(n²)
- Worst Case: O(n²)

**Space Complexity:** O(1)

**Example:**
```
Input: 64 34 25 12 22 11 90 88 45 50
Output: 11 12 22 25 34 45 50 64 88 90
```

---

## Problem 2: Insertion Sort

**Algorithm:**
- Build sorted array one element at a time
- Take each element and insert at correct position
- Elements on left are already sorted
- Like sorting playing cards in hand

**Key Points:**
- Start from second element
- Compare with previous elements
- Shift larger elements to right
- Insert current element at correct position

**Time Complexity:**
- Best Case: O(n) - when already sorted
- Average Case: O(n²)
- Worst Case: O(n²)

**Space Complexity:** O(1)

**Advantages:**
- Efficient for small datasets
- Adaptive - fast for nearly sorted arrays
- Stable sorting algorithm
- Online - can sort as data arrives

---

## Problem 3: Selection Sort

**Algorithm:**
- Divide array into sorted and unsorted parts
- Find minimum element from unsorted part
- Swap with first element of unsorted part
- Move boundary between sorted and unsorted

**Key Points:**
- Always makes n-1 comparisons
- Minimum number of swaps: O(n)
- Not adaptive - same performance regardless of input
- Not stable (may change relative order)

**Time Complexity:**
- Best Case: O(n²)
- Average Case: O(n²)
- Worst Case: O(n²)

**Space Complexity:** O(1)

**Advantages:**
- Minimum number of swaps
- Good when memory writes are costly
- Simple implementation

---

## Problem 4: Quick Sort

**Algorithm:**
- Divide and Conquer approach
- Pick a pivot element (last element)
- Partition array around pivot
  - Elements < pivot go left
  - Elements > pivot go right
- Recursively sort left and right subarrays

**Key Points:**
- Most efficient sorting algorithm
- In-place sorting
- Not stable
- Performance depends on pivot selection

**Time Complexity:**
- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n²) - when array is already sorted

**Space Complexity:** O(log n) - recursion stack

**Advantages:**
- Fastest for large datasets
- Cache-friendly
- In-place sorting

**Disadvantages:**
- Worst case O(n²)
- Not stable
- Recursive - stack overflow risk for large arrays

---

## Compilation and Execution

### Individual Programs:

```bash
# Problem 1: Bubble Sort
gcc a6_problem1_bubble_sort.c -o bubble
./bubble

# Problem 2: Insertion Sort
gcc a6_problem2_insertion_sort.c -o insertion
./insertion

# Problem 3: Selection Sort
gcc a6_problem3_selection_sort.c -o selection
./selection

# Problem 4: Quick Sort
gcc a6_problem4_quick_sort.c -o quick
./quick
```

### Test All Programs:
```bash
# Compile all
gcc a6_problem1_bubble_sort.c -o bubble
gcc a6_problem2_insertion_sort.c -o insertion
gcc a6_problem3_selection_sort.c -o selection
gcc a6_problem4_quick_sort.c -o quick

# Test with same input
echo "64 34 25 12 22 11 90 88 45 50" | ./bubble
echo "64 34 25 12 22 11 90 88 45 50" | ./insertion
echo "64 34 25 12 22 11 90 88 45 50" | ./selection
echo "64 34 25 12 22 11 90 88 45 50" | ./quick
```

---

## Comparison of Sorting Algorithms

| Algorithm | Time (Best) | Time (Avg) | Time (Worst) | Space | Stable | Adaptive |
|-----------|-------------|------------|--------------|-------|--------|----------|
| Bubble | O(n) | O(n²) | O(n²) | O(1) | Yes | Yes |
| Insertion | O(n) | O(n²) | O(n²) | O(1) | Yes | Yes |
| Selection | O(n²) | O(n²) | O(n²) | O(1) | No | No |
| Quick | O(n log n) | O(n log n) | O(n²) | O(log n) | No | No |

**When to Use:**
- **Bubble Sort**: Educational purposes, small datasets
- **Insertion Sort**: Small datasets, nearly sorted data, online sorting
- **Selection Sort**: Memory writes are costly, small datasets
- **Quick Sort**: Large datasets, general-purpose sorting

---

## Key Concepts

### Stable vs Unstable Sorting:
- **Stable**: Maintains relative order of equal elements
  - Example: Bubble Sort, Insertion Sort
- **Unstable**: May change relative order
  - Example: Selection Sort, Quick Sort

### Adaptive vs Non-Adaptive:
- **Adaptive**: Performance improves for partially sorted data
  - Example: Bubble Sort, Insertion Sort
- **Non-Adaptive**: Same performance regardless of input
  - Example: Selection Sort

### In-Place vs Out-of-Place:
- **In-Place**: Sorts within original array (O(1) extra space)
  - All four algorithms in this assignment
- **Out-of-Place**: Requires extra space proportional to input
  - Example: Merge Sort

---

## Course Information

**Course Code:** BCACC291
**Course Name:** Data Structure Lab using C
**Semester:** BCA 2nd Semester
**Institution:** Institute of Engineering & Management

---

## Learning Outcomes

After completing this assignment, students will:
1. Understand fundamental sorting algorithms
2. Analyze time and space complexity
3. Implement sorting in C
4. Compare algorithm performance
5. Choose appropriate algorithm for different scenarios
6. Understand recursion (Quick Sort)
7. Master array manipulation

---

## References

- Introduction to Algorithms by Cormen, Leiserson, Rivest, and Stein
- Data Structures Using C by Reema Thareja
- The C Programming Language by Kernighan and Ritchie
- Fundamentals of Data Structures in C by Horowitz and Sahni

---

## License

These solutions are provided for educational purposes.
