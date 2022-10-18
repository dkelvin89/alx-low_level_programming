#include "main.h"
/**
 * Task 2 - a function that checks if a character is lowercase.
 * Returns 1 if c is lowercase
 *Coded by David Kelvin
 * Return: 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
