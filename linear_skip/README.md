# directory linear_skip by A.OTMANI
## Write a function that searches for a value in a sorted skip list of integers.
1) Prototype : skiplist_t *linear_skip(skiplist_t *list, int value);
2) Where list is a pointer to the head of the skip list to search in
3) A node of the express lane is placed every index which is a multiple of
   the square root of the size of the list (see example below)
4) And value is the value to search for
5) You can assume that list will be sorted in ascending order
6) Your function must return a pointer on the first node where value is located
7) If value is not present in list or if head is NULL, your function must return NULL
8) Every time you compare a value in the list to the value you are searching, you have
   to print this value (see example below)
