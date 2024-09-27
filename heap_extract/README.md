# directory heap_extract by A.OTMANI
## Write a function that extracts the root node of a Max Binary Heap:
1) Prototype: int heap_extract(heap_t **root);
2) root is a double pointer to the root node of the heap
3) Your function must return the value stored in the root node
4) The root node must be freed and replace with the last level-order node of the heap
5) Once replaced, the heap must be rebuilt if necessary
6) If your function fails, return 0
