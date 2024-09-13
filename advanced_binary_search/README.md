# directory advanced_binary_search by A.OTMANI
## You may have noticed that basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.
### Write a function that searches for a value in a sorted array of integers.

1) Prototype : int advanced_binary(int *array, size_t size, int value);
2) array is a pointer to the first element of the array to search in
3) size is the number of elements in array
4) value is the value to search for
5) Your function must return the index where value is located
6) You can assume that array will be sorted in ascending order
7) If value is not present in array or if array is NULL, your function must return -1
8) Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
9) You have to use recursion. You may only use one loop (while, for, do while, etc.) in order to print the array
