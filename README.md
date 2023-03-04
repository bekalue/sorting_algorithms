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
* [Quiz](QUIZ.md)
* [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
* [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
* [CS50 Algorithms explanation in detail by David Malan](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s)
* [All about sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)

## Tasks

+ [x] 0\. [Bubble sort](https://www.youtube.com/embed/lyZQPjUT5B4)<br/>_**[0-bubble_sort.c](0-bubble_sort.c)**_ sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm.
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
+ [x] 1\. [Insertion sort](https://www.youtube.com/embed/ROalU379l3U)<br/>_**[1-insertion_sort_list.c](1-insertion_sort_list.c)**_ sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort) algorithm.
  + Prototype: `void insertion_sort_list(listint_t **list);`
  + You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
  + You’re expected to print the list after each time you swap two elements
  
  [1-O](1-O) the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
  alex@/tmp/sort$ ./insertion
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  19, 48, 71, 99, 13, 52, 96, 73, 86, 7
  19, 48, 71, 13, 99, 52, 96, 73, 86, 7
  19, 48, 13, 71, 99, 52, 96, 73, 86, 7
  19, 13, 48, 71, 99, 52, 96, 73, 86, 7
  13, 19, 48, 71, 99, 52, 96, 73, 86, 7
  13, 19, 48, 71, 52, 99, 96, 73, 86, 7
  13, 19, 48, 52, 71, 99, 96, 73, 86, 7
  13, 19, 48, 52, 71, 96, 99, 73, 86, 7
  13, 19, 48, 52, 71, 96, 73, 99, 86, 7
  13, 19, 48, 52, 71, 73, 96, 99, 86, 7
  13, 19, 48, 52, 71, 73, 96, 86, 99, 7
  13, 19, 48, 52, 71, 73, 86, 96, 99, 7
  13, 19, 48, 52, 71, 73, 86, 96, 7, 99
  13, 19, 48, 52, 71, 73, 86, 7, 96, 99
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
+ [x] 2\. [Selection sort](https://www.youtube.com/embed/Ns4TPTC8whw)<br/>_**[2-selection_sort.c](2-selection_sort.c)**_ sorts an array of integers in ascending order using the [Selection sort](https://en.wikipedia.org/wiki/Selection_sort) algorithm.
  + Prototype: `void selection_sort(int *array, size_t size);`
  + You’re expected to print the `array` after each time you swap two elements
  
  [2-O](2-O) the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select
  alex@/tmp/sort$ ./select
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  7, 48, 99, 71, 13, 52, 96, 73, 86, 19
  7, 13, 99, 71, 48, 52, 96, 73, 86, 19
  7, 13, 19, 71, 48, 52, 96, 73, 86, 99
  7, 13, 19, 48, 71, 52, 96, 73, 86, 99
  7, 13, 19, 48, 52, 71, 96, 73, 86, 99
  7, 13, 19, 48, 52, 71, 73, 96, 86, 99
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$
  ```
+ [x] 3\. [Quick sort](https://www.youtube.com/embed/ywWBy6J5gz8)<br/>_**[3-quick_sort.c](3-quick_sort.c)**_ sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm.
  + Prototype: `void quick_sort(int *array, size_t size);`
  + You must implement the `Lomuto` partition scheme.
  + The pivot should always be the last element of the partition being sorted.
  + You’re expected to print the `array` after each time you swap two elements
  
  [3-O](3-O) the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
  alex@/tmp/sort$ ./quick
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  7, 48, 99, 71, 13, 52, 96, 73, 86, 19
  7, 13, 99, 71, 48, 52, 96, 73, 86, 19
  7, 13, 19, 71, 48, 52, 96, 73, 86, 99
  7, 13, 19, 71, 48, 52, 73, 96, 86, 99
  7, 13, 19, 71, 48, 52, 73, 86, 96, 99
  7, 13, 19, 48, 71, 52, 73, 86, 96, 99
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$
  ```
+ [x] 4\. Shell sort - Knuth Sequence<br/>_**[100-shell_sort.c](100-shell_sort.c)**_ sorts an array of integers in ascending order using the [Shell sort](https://en.wikipedia.org/wiki/Shellsort) algorithm, using the `Knuth sequence`.
  + Prototype: `void shell_sort(int *array, size_t size);`
  + You must use the following sequence of intervals (a.k.a the Knuth sequence):
    + `n+1 = n * 3 + 1`
    + `1, 4, 13, 40, 121, ...`
  + You’re expected to print the `array` each time you decrease the interval
  
  __No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap__
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 100-main.c 100-shell_sort.c print_array.c -o shell
  alex@/tmp/sort$ ./shell
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  13, 7, 96, 71, 19, 48, 99, 73, 86, 52
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$
  ```
+ [x] 5\. Cocktail shaker sort<br/>_**[101-cocktail_sort_list.c](101-cocktail_sort_list.c)**_ sorts a doubly linked list of integers in ascending order using the [Cocktail shaker sort](https://en.wikipedia.org/wiki/Cocktail_shaker_sort) algorithm.
  + Prototype: `void cocktail_sort_list(listint_t **list);`
  + You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
  + You’re expected to print the `lis`t after each time you swap two elements
  
  [101-O](101-O) the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 101-main.c 101-cocktail_sort_list.c print_list.c -o cocktail
  alex@/tmp/sort$ ./cocktail
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  19, 48, 71, 99, 13, 52, 96, 73, 86, 7
  19, 48, 71, 13, 99, 52, 96, 73, 86, 7
  19, 48, 71, 13, 52, 99, 96, 73, 86, 7
  19, 48, 71, 13, 52, 96, 99, 73, 86, 7
  19, 48, 71, 13, 52, 96, 73, 99, 86, 7
  19, 48, 71, 13, 52, 96, 73, 86, 99, 7
  19, 48, 71, 13, 52, 96, 73, 86, 7, 99
  19, 48, 71, 13, 52, 96, 73, 7, 86, 99
  19, 48, 71, 13, 52, 96, 7, 73, 86, 99
  19, 48, 71, 13, 52, 7, 96, 73, 86, 99
  19, 48, 71, 13, 7, 52, 96, 73, 86, 99
  19, 48, 71, 7, 13, 52, 96, 73, 86, 99
  19, 48, 7, 71, 13, 52, 96, 73, 86, 99
  19, 7, 48, 71, 13, 52, 96, 73, 86, 99
  7, 19, 48, 71, 13, 52, 96, 73, 86, 99
  7, 19, 48, 13, 71, 52, 96, 73, 86, 99
  7, 19, 48, 13, 52, 71, 96, 73, 86, 99
  7, 19, 48, 13, 52, 71, 73, 96, 86, 99
  7, 19, 48, 13, 52, 71, 73, 86, 96, 99
  7, 19, 13, 48, 52, 71, 73, 86, 96, 99
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$
  ```
+ [x] 6\. Counting sort<br/>_**[102-counting_sort.c](102-counting_sort.c)**_ sorts an array of integers in ascending order using the [Counting sort](https://en.wikipedia.org/wiki/Counting_sort) algorithm.
  + Prototype: `void counting_sort(int *array, size_t size);`
  + You can assume that `array` will contain only numbers `>= 0`
  + You are allowed to use `malloc` and `free` for this task
  + You’re expected to print your counting array once it is set up
    + This array is of size `k + 1` where `k` is the largest number in `array`
  
  [102-O](102-O) the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 102-main.c 102-counting_sort.c print_array.c -o counting
  alex@/tmp/sort$ ./counting
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5,
  5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 10
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$
  ```
+ [x] 7\. Merge sort<br/>_**[103-merge_sort.c](103-merge_sort.c)**_ sorts an array of integers in ascending order using the [Merge sort](https://en.wikipedia.org/wiki/Merge_sort) algorithm.
  + Prototype: `void merge_sort(int *array, size_t size);`
  + You must implement the `top-down` merge sort algorithm
    + When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. `{1, 2, 3, 4, 5}` -> `{1, 2}, {3, 4, 5}`
    + Sort the left array before the right array
  + You are allowed to use `printf`
  + You are allowed to use `malloc` and `free` only once (only one call)
  
  [103-O](103-O) the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line::
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 103-main.c 103-merge_sort.c print_array.c -o merge
  alex@/tmp/sort$ ./merge
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  Merging...
  [left]: 19
  [right]: 48
  [Done]: 19, 48
  Merging...
  [left]: 71
  [right]: 13
  [Done]: 13, 71
  Merging...
  [left]: 99
  [right]: 13, 71
  [Done]: 13, 71, 99
  Merging...
  [left]: 19, 48
  [right]: 13, 71, 99
  [Done]: 13, 19, 48, 71, 99
  Merging...
  [left]: 52
  [right]: 96
  [Done]: 52, 96
  Merging...
  [left]: 86
  [right]: 7
  [Done]: 7, 86
  Merging...
  [left]: 73
  [right]: 7, 86
  [Done]: 7, 73, 86
  Merging...
  [left]: 52, 96
  [right]: 7, 73, 86
  [Done]: 7, 52, 73, 86, 96
  Merging...
  [left]: 13, 19, 48, 71, 99
  [right]: 7, 52, 73, 86, 96
  [Done]: 7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$
  ```
+ [x] 8\. Heap sort<br/>_**[104-heap_sort.c](104-heap_sort.c)**_ sorts an array of integers in ascending order using the [Heap sort](https://en.wikipedia.org/wiki/Heapsort) algorithm.
  + Prototype: `void heap_sort(int *array, size_t size);`
  + You must implement the `sift-down` heap sort algorithm
  + You’re expected to print the `array` after each time you swap two elements
  
  [104-O](104-O) the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 104-main.c 104-heap_sort.c print_array.c -o heap
  alex@/tmp/sort$ ./heap
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  19, 48, 99, 86, 13, 52, 96, 73, 71, 7
  19, 86, 99, 48, 13, 52, 96, 73, 71, 7
  19, 86, 99, 73, 13, 52, 96, 48, 71, 7
  99, 86, 19, 73, 13, 52, 96, 48, 71, 7
  99, 86, 96, 73, 13, 52, 19, 48, 71, 7
  7, 86, 96, 73, 13, 52, 19, 48, 71, 99
  96, 86, 7, 73, 13, 52, 19, 48, 71, 99
  96, 86, 52, 73, 13, 7, 19, 48, 71, 99
  71, 86, 52, 73, 13, 7, 19, 48, 96, 99
  86, 71, 52, 73, 13, 7, 19, 48, 96, 99
  86, 73, 52, 71, 13, 7, 19, 48, 96, 99
  48, 73, 52, 71, 13, 7, 19, 86, 96, 99
  73, 48, 52, 71, 13, 7, 19, 86, 96, 99
  73, 71, 52, 48, 13, 7, 19, 86, 96, 99
  19, 71, 52, 48, 13, 7, 73, 86, 96, 99
  71, 19, 52, 48, 13, 7, 73, 86, 96, 99
  71, 48, 52, 19, 13, 7, 73, 86, 96, 99
  7, 48, 52, 19, 13, 71, 73, 86, 96, 99
  52, 48, 7, 19, 13, 71, 73, 86, 96, 99
  13, 48, 7, 19, 52, 71, 73, 86, 96, 99
  48, 13, 7, 19, 52, 71, 73, 86, 96, 99
  48, 19, 7, 13, 52, 71, 73, 86, 96, 99
  13, 19, 7, 48, 52, 71, 73, 86, 96, 99
  19, 13, 7, 48, 52, 71, 73, 86, 96, 99
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  13, 7, 19, 48, 52, 71, 73, 86, 96, 99
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$
  ```
+ [x] 9\. Radix sort<br/>_**[105-radix_sort.c](105-radix_sort.c)**_ sorts an array of integers in ascending order using the [Radix sort](https://en.wikipedia.org/wiki/Radix_sort) algorithm.
  + Prototype: `void radix_sort(int *array, size_t size);`
  + You must implement the `LSD` radix sort algorithm
  + You can assume that `array` will contain only numbers `>= 0`
  + You are allowed to use `malloc` and `free` for this task
  + You’re expected to print the `array` each time you increase your `significant digit`
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 105-main.c 105-radix_sort.c print_array.c -o radix
  alex@/tmp/sort$ ./radix
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  71, 52, 13, 73, 96, 86, 7, 48, 19, 99
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$
  ```
+ [x] 10\. Bitonic sort<br/>_**[106-bitonic_sort.c](106-bitonic_sort.c)**_ sorts an array of integers in ascending order using the [Bitonic sort](https://en.wikipedia.org/wiki/Bitonic_sorter) algorithm.
  + Prototype: `void bitonic_sort(int *array, size_t size);`
  + You can assume that `size` will be equal to `2^k`, where `k >= 0` (when `array` is not `NULL` …)
  + You are allowed to use `printf`
  + You’re expected to print the `array` each time you swap two elements
  
  [106-O](106-O) the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 106-main.c 106-bitonic_sort.c print_array.c -o bitonic
  alex@/tmp/sort$ ./bitonic
  100, 93, 40, 57, 14, 58, 85, 54, 31, 56, 46, 39, 15, 26, 78, 13
  
  Merging [16/16] (UP):
  100, 93, 40, 57, 14, 58, 85, 54, 31, 56, 46, 39, 15, 26, 78, 13
  Merging [8/16] (UP):
  100, 93, 40, 57, 14, 58, 85, 54
  Merging [4/16] (UP):
  100, 93, 40, 57
  Merging [2/16] (UP):
  100, 93
  Result [2/16] (UP):
  93, 100
  Merging [2/16] (DOWN):
  40, 57
  Result [2/16] (DOWN):
  57, 40
  Result [4/16] (UP):
  40, 57, 93, 100
  Merging [4/16] (DOWN):
  14, 58, 85, 54
  Merging [2/16] (UP):
  14, 58
  Result [2/16] (UP):
  14, 58
  Merging [2/16] (DOWN):
  85, 54
  Result [2/16] (DOWN):
  85, 54
  Result [4/16] (DOWN):
  85, 58, 54, 14
  Result [8/16] (UP):
  14, 40, 54, 57, 58, 85, 93, 100
  Merging [8/16] (DOWN):
  31, 56, 46, 39, 15, 26, 78, 13
  Merging [4/16] (UP):
  31, 56, 46, 39
  Merging [2/16] (UP):
  31, 56
  Result [2/16] (UP):
  31, 56
  Merging [2/16] (DOWN):
  46, 39
  Result [2/16] (DOWN):
  46, 39
  Result [4/16] (UP):
  31, 39, 46, 56
  Merging [4/16] (DOWN):
  15, 26, 78, 13
  Merging [2/16] (UP):
  15, 26
  Result [2/16] (UP):
  15, 26
  Merging [2/16] (DOWN):
  78, 13
  Result [2/16] (DOWN):
  78, 13
  Result [4/16] (DOWN):
  78, 26, 15, 13
  Result [8/16] (DOWN):
  78, 56, 46, 39, 31, 26, 15, 13
  Result [16/16] (UP):
  13, 14, 15, 26, 31, 39, 40, 46, 54, 56, 57, 58, 78, 85, 93, 100
  
  13, 14, 15, 26, 31, 39, 40, 46, 54, 56, 57, 58, 78, 85, 93, 100
  alex@/tmp/sort$
  ```
+ [x] 11\. Quick Sort - Hoare Partition scheme<br/>_**[107-quick_sort_hoare.c](107-quick_sort_hoare.c)**_ sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm.
  + Prototype: `void quick_sort_hoare(int *array, size_t size);`
  + You must implement the `Hoare` partition scheme.
  + The pivot should always be the last element of the partition being sorted.
  + You’re expected to print the `array` after each time you swap two elements (See example below)
  
  [107-O](107-O) the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
  + in the best case
  + in the average case
  + in the worst case
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 107-main.c 107-quick_sort_hoare.c print_array.c -o quick
  alex@/tmp/sort$ ./quick
  19, 48, 99, 71, 13, 52, 96, 73, 86, 7
  
  7, 48, 99, 71, 13, 52, 96, 73, 86, 19
  7, 19, 99, 71, 13, 52, 96, 73, 86, 48
  7, 19, 13, 71, 99, 52, 96, 73, 86, 48
  7, 13, 19, 71, 99, 52, 96, 73, 86, 48
  7, 13, 19, 48, 99, 52, 96, 73, 86, 71
  7, 13, 19, 48, 71, 52, 96, 73, 86, 99
  7, 13, 19, 48, 52, 71, 96, 73, 86, 99
  7, 13, 19, 48, 52, 71, 86, 73, 96, 99
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  
  7, 13, 19, 48, 52, 71, 73, 86, 96, 99
  alex@/tmp/sort$
  ```
+ [x] 12\. [Dealer](https://www.youtube.com/embed/_HJlGWXzlLA)<br/>_**[1000-sort_deck.c](1000-sort_deck.c)**_ sorts a deck of cards.
  + Prototype: `void sort_deck(deck_node_t **deck);`
  + You are allowed to use the C standard library function `qsort`
  + You have to push you `deck.h` header file, containing the previous data structures definition
  + Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.
  + You can assume there is exactly `52` elements in the doubly linked list.
  + You are free to use the sorting algorithm of your choice
  + The deck must be ordered:
    + From `Ace` to `King`
    + From `Spades` to `Diamonds`
  
  __Example__:
  ```c
  alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1000-main.c 1000-sort_deck.c -o deck
  alex@/tmp/sort$ ./deck
  {Jack, C}, {4, H}, {3, H}, {3, D}, {Queen, H}, {5, H}, {5, S}, {10, H}, {6, H}, {5, D}, {6, S}, {9, H}, {7, D}
  {Jack, S}, {Ace, D}, {9, C}, {Jack, D}, {7, S}, {King, D}, {10, C}, {King, S}, {8, C}, {9, S}, {6, C}, {Ace, C}, {3, S}
  {8, S}, {9, D}, {2, H}, {4, D}, {6, D}, {3, C}, {Queen, C}, {10, S}, {8, D}, {8, H}, {Ace, S}, {Jack, H}, {2, C}
  {4, S}, {2, S}, {2, D}, {King, C}, {Queen, S}, {Queen, D}, {7, C}, {7, H}, {5, C}, {10, D}, {4, C}, {King, H}, {Ace, H}
  
  
  {Ace, S}, {2, S}, {3, S}, {4, S}, {5, S}, {6, S}, {7, S}, {8, S}, {9, S}, {10, S}, {Jack, S}, {Queen, S}, {King, S}
  {Ace, H}, {2, H}, {3, H}, {4, H}, {5, H}, {6, H}, {7, H}, {8, H}, {9, H}, {10, H}, {Jack, H}, {Queen, H}, {King, H}
  {Ace, C}, {2, C}, {3, C}, {4, C}, {5, C}, {6, C}, {7, C}, {8, C}, {9, C}, {10, C}, {Jack, C}, {Queen, C}, {King, C}
  {Ace, D}, {2, D}, {3, D}, {4, D}, {5, D}, {6, D}, {7, D}, {8, D}, {9, D}, {10, D}, {Jack, D}, {Queen, D}, {King, D}
  alex@/tmp/sort$
  ```
