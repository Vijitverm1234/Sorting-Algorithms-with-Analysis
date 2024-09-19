
# Sorting Algorithms Time Complexities

This README provides an overview of the time complexities (best, average, and worst cases) for commonly used sorting algorithms.

## Table of Contents

1. [Insertion Sort](#insertion-sort)
2. [Quick Sort](#quick-sort)
3. [Selection Sort](#selection-sort)
4. [Bubble Sort](#bubble-sort)
5. [Shell Sort](#shell-sort)

---

## 1. Insertion Sort

Insertion Sort builds a sorted array one element at a time by comparing each new element with the already sorted portion and inserting it in the correct position.

| Case         | Time Complexity |
|--------------|-----------------|
| **Best**     | O(n)            |
| **Average**  | O(n²)           |
| **Worst**    | O(n²)           |

---

## 2. Quick Sort

Quick Sort is a divide-and-conquer algorithm that selects a pivot element and partitions the array around the pivot, recursively sorting the subarrays.

| Case         | Time Complexity |
|--------------|-----------------|
| **Best**     | O(n log n)      |
| **Average**  | O(n log n)      |
| **Worst**    | O(n²)           |

---

## 3. Selection Sort

Selection Sort repeatedly selects the smallest element from the unsorted portion and swaps it with the first unsorted element.

| Case         | Time Complexity |
|--------------|-----------------|
| **Best**     | O(n²)           |
| **Average**  | O(n²)           |
| **Worst**    | O(n²)           |

---

## 4. Bubble Sort

Bubble Sort is a simple comparison-based algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

| Case         | Time Complexity |
|--------------|-----------------|
| **Best**     | O(n)            |
| **Average**  | O(n²)           |
| **Worst**    | O(n²)           |

---

## 5. Shell Sort

Shell Sort is an extension of Insertion Sort that allows the exchange of far-apart elements. It improves the time complexity by sorting elements at a specific gap and reducing the gap in each iteration.

| Case         | Time Complexity |
|--------------|-----------------|
| **Best**     | O(n log n)      |
| **Average**  | O(n log² n)     |
| **Worst**    | O(n²)           |

---

### Key:
- **n**: Number of elements
- **log n**: The logarithmic function base 2

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
