# 0x1B. C - Sorting Algorithms & Big O

This repository contains implementations of various sorting algorithms in the C programming language. Additionally, it explores the concept of Big O notation and its significance in analyzing algorithmic complexity.

## Algorithms

The following sorting algorithms are implemented in this repository:

1. Bubble Sort: A simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

2. Insertion Sort: Another comparison-based sorting algorithm that builds the final sorted array one item at a time, while keeping the already sorted portion of the array in its correct position.

3. Selection Sort: A simple sorting algorithm that repeatedly selects the smallest or largest element from the unsorted portion of the array and places it at the beginning of the sorted portion.

4. Quick Sort: A divide-and-conquer algorithm that selects a pivot element from the array and partitions the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. It then recursively sorts the sub-arrays.

5. Shell Sort: A variation of insertion sort that divides the input into smaller sub-arrays, and performs insertion sort on each sub-array. The size of the sub-arrays decreases with each iteration until the entire array is sorted.

6. Cocktail Shaker Sort: Also known as bidirectional bubble sort, this algorithm sorts the array in both directions, alternatively moving the largest element to the end and the smallest element to the beginning of the array.

## Big O Notation

In computer science, Big O notation is used to describe the performance characteristics of an algorithm. It provides an upper bound on the growth rate of the time or space complexity of an algorithm, as the input size approaches infinity.

Understanding Big O notation is crucial for analyzing and comparing the efficiency of different algorithms. It allows us to estimate how the runtime or memory requirements of an algorithm increase with larger inputs, facilitating informed decisions when selecting appropriate algorithms for specific tasks.

This repository explores the Big O complexities of the implemented sorting algorithms and provides explanations and examples to aid comprehension.

## Data Structure

This repository focuses on sorting algorithms and Big O notation; however, it primarily operates on arrays. Arrays are fundamental data structures in C that store a fixed-size sequence of elements of the same type. Arrays provide efficient access to individual elements using their indices, making them suitable for implementing and analyzing sorting algorithms.

## Getting Started

To explore the sorting algorithms and Big O notation covered in this repository, follow these steps:

1. Clone the repository:

   ```
   $ git clone https://github.com/your_username/0x1B-sorting_algorithms.git
   ```

2. Navigate to the repository's directory:

   ```
   $ cd 0x1B-sorting_algorithms
   ```

3. Browse the various sorting algorithm implementations and Big O analyses in the source files.

4. Compile and run the desired algorithm implementation to observe its sorting behavior.

## Contributions

Contributions to this repository are welcome. If you discover any issues, have suggestions for improvements, or wish to add more sorting algorithms or Big O analyses, please feel free to submit a pull request.

When contributing, please follow the repository's code of conduct and ensure that your changes align with the goals and style of the project.

## License

This repository is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.

## Acknowledgments

The sorting algorithm implementations and Big O analyses in this repository are based on various educational resources, books, and online references, which are credited within the respective source files.

##Partners
1. Alex Mirichu @gichbuoy
2. Wellington Mwadali @Mwadali

