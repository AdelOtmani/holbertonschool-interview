#include "menger.h"

/**
 * menger - function draws 2D Menger Sponge
 * @level: int
 */

void menger(int level)
{
	int i, j;
	int size = pow(3, level);

	if (level < 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (printcube(i, j))
				printf("#");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

/**
 * printcube - print "#" or not
 *
 * @i: integer
 * @j: integer
 * Return: true if print the "#" otherwise false
 */
bool printcube(int i, int j)
{
	while (i && j)
	{
		if (i % 3 == 1 && j % 3 == 1)
			return (false);
		i = i / 3;
		j = j / 3;
	}
	return (true);
}
