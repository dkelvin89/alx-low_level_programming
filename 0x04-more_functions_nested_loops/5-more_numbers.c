#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that prints (0-14) ten times, followed by newline.
 *
 * Return: Value of numbers.
 */

void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
