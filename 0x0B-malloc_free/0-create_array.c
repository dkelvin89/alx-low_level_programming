#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: input
 * @c: input
 *
 * return: output
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (ar == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
