#include <stdlib.h>
#include "slide_line.h"

/**
 * swap_num - swap pointer
 * @a: int pointer
 * @b: int pointer
 */

void swap_num(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}

/**
 * move_left - move numbers to the left
 * @line: array of int
 * @size: size of the array
 */

void move_left(int *line, size_t size)
{
    size_t i, pos = 0;

    for (i = 0; i < size && pos <size; i++)
    {
        while (line[pos] == 0 && pos < size && pos + 1 <size)
        {
            pos++;
        }
        if (!line[i])
        {
            swap_num(&line[pos], &line[i]);
        }
        pos++;
    }
}

/**
 * move_right - move numbers to the right
 * @line: array of int
 * @size: size of the array
 */
void move_right(int *line, size_t size)
{
	size_t i;
	size_t pos = size - 1;

	for (i = size - 1; (int) i >= 0 && (int) pos >= 0; i--)
	{
		while (line[pos] == 0 && (int) pos > 0)
        {
            pos--;
        }
		if (!line[i])
        {
            swap_num(&line[pos], &line[i]);
        }
		pos--;
	}
}

/**
 * slide_line - function that slides and merges an array of integers
 * @line: array of int
 * @size: size of the array
 * @direction: direction left or right
 * Return: 1 for success, else 0.
 */
int slide_line(int *line, size_t size, int direction)
{
	size_t i = 0;

	if (direction == SLIDE_LEFT) {
		move_left(line, size);
		for (i = 0; i < size; i++)
		{
			if (line[i] == line[i + 1])
			{
				line[i] = line[i] + line[i + 1];
				line[i + 1] = 0;
			}
		}
		move_left(line, size);
		return (1);
	} else if (direction == SLIDE_RIGHT) {
		move_right(line, size);
		for (i = size - 1; (int) i >= 0; i--)
		{
			if (line[i] == line[i - 1])
			{
				line[i] = line[i] + line[i - 1];
				line[i - 1] = 0;
			}
		}
		move_right(line, size);
		return (1);
	}
	return (0);
}
