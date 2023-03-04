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
+ [x] 6\. Counting sort<br/>_**[102-counting_sort.c](102-counting_sort.c)**_ sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm.
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
+ [x] 7\. [Quick sort](https://www.youtube.com/embed/ywWBy6J5gz8)<br/>_**[3-quick_sort.c](3-quick_sort.c)**_ sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm.
  + Prototype: `void quick_sort(int *array, size_t size);`
  + You must implement the `Lomuto` partition scheme.
  + The pivot should always be the last element of the partition being sorted.
  + You’re expected to print the `array` after each time you swap two elements
  
  [3-O](3-O) the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
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
+ [x] 8\. [Quick sort](https://www.youtube.com/embed/ywWBy6J5gz8)<br/>_**[3-quick_sort.c](3-quick_sort.c)**_ sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm.
  + Prototype: `void quick_sort(int *array, size_t size);`
  + You must implement the `Lomuto` partition scheme.
  + The pivot should always be the last element of the partition being sorted.
  + You’re expected to print the `array` after each time you swap two elements
  
  [3-O](3-O) the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
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
+ [x] 9\. [Quick sort](https://www.youtube.com/embed/ywWBy6J5gz8)<br/>_**[3-quick_sort.c](3-quick_sort.c)**_ sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm.
  + Prototype: `void quick_sort(int *array, size_t size);`
  + You must implement the `Lomuto` partition scheme.
  + The pivot should always be the last element of the partition being sorted.
  + You’re expected to print the `array` after each time you swap two elements
  
  [3-O](3-O) the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
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
