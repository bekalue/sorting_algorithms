# Quiz About Complexity Analysis

## Question #0
What is the time complexity of searching for an element - worst case - in a hash table with the implementation you used during the previous Hash Table C project (chaining)?

Answer: `O(n)`

## Question #1
Assuming you have a pointer to the node to remove, what is the time complexity of removing the nth element of a doubly linked list?

Answer: `O(1)`

## Question #2
What is the time complexity of searching for an element in a stack of size n?

Answer: `O(n)`

## Question #3
Assuming you have a pointer to the node to insert, what is the time complexity of inserting after the nth element of a doubly linked list?

Answer: `O(n)`

## Question #4
What is the time complexity of setting the value of the nth element in a singly linked list? (Assuming you have a pointer to the node to set the value of)

Answer: `O(1)`

## Question #5
What is the time complexity of this function / algorithm?
```
foreach($numbers as $number)
{
    echo $number;
}
```

Answer: `O(n)`

## Question #6
What is the time complexity of setting a value at index n in an unsorted array?

Answer: `O(1)`

## Question #7
What is the time complexity of best case deletion from a hash table with the implementation you used during the previous Hash Table C project (chaining)?

Answer: `O(1)`

Question #8
What is the time complexity of this function / algorithm?
```
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}
```
Answer: `O(nlog(n))`
