# 0x1B. C - Sorting algorithms & Big O
> 7 day project. it was meant to be a [pair programming](https://en.wikipedia.org/wiki/Pair_programming) project but i did it alone.

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)

## Learning Objectives
>needed to be [explained](https://fs.blog/feynman-learning-technique/) after the project.
* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## Resources
* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
* [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
* [CS50 Algorithms explanation in detail by David Malan](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s)
* [All about sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)

## Tasks

+ [x] 0\. Bubble sort<br/>_**[0-bubble_sort.c](0-bubble_sort.c)**_ sorts an array of integers in ascending order using the Bubble sort algorithm.
  + Prototype: `void bubble_sort(int *array, size_t size);`
  + Its expected to print the `array` after each time you swap two elements
  
  [0-O](0-O) the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
  alex@/tmp/sort$ ./bubble
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  19, 48, 71, 99, 13, 52, 96, 73, 86, 7
  19, 48, 71, 13, 99, 52, 96, 73, 86, 7
  19, 48, 71, 13, 52, 99, 96, 73, 86, 7
  19, 48, 71, 13, 52, 96, 99, 73, 86, 7
  19, 48, 71, 13, 52, 96, 73, 99, 86, 7
  19, 48, 71, 13, 52, 96, 73, 86, 99, 7
  19, 48, 71, 13, 52, 96, 73, 86, 7, 99
  19, 48, 13, 71, 52, 96, 73, 86, 7, 99
  19, 48, 13, 52, 71, 96, 73, 86, 7, 99
  19, 48, 13, 52, 71, 73, 96, 86, 7, 99
  19, 48, 13, 52, 71, 73, 86, 96, 7, 99
  19, 48, 13, 52, 71, 73, 86, 7, 96, 99
  19, 13, 48, 52, 71, 73, 86, 7, 96, 99
  19, 13, 48, 52, 71, 73, 7, 86, 96, 99
  13, 19, 48, 52, 71, 73, 7, 86, 96, 99
  13, 19, 48, 52, 71, 7, 73, 86, 96, 99
  13, 19, 48, 52, 7, 71, 73, 86, 96, 99
  13, 19, 48, 7, 52, 71, 73, 86, 96, 99
  13, 19, 7, 48, 52, 71, 73, 86, 96, 99
  13, 7, 19, 48, 52, 71, 73, 86, 96, 99
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$ 
  ```
