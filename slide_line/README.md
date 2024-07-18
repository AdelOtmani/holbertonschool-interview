# directory slide_line 2048 game by A.OTMANI
## Write a function that slides and merges an array of integers

1) Prototype: int slide_line(int *line, size_t size, int direction);
2) Where line points to an array of integers containing size elements, that must be slided & merged to the direction represented by direction. direction can be either:
    a) SLIDE_LEFT
    b) SLIDE_RIGHT
    c) If it is something else, the function must fail
    d) Both macros SLIDE_LEFT and SLIDE_RIGHT must be defined in slide_line.h
3) Your function must return 1 upon success, or 0 upon failure
4) You are not allowed to allocate memory dynamically (malloc, calloc, …)
