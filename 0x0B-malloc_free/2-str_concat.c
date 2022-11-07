#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, and the contents of s2, null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * @s1: input
 * @s2: input
 * Return: ar
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k;
	char *ar;
	int l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	k = i + j;
	ar = malloc(sizeof(char) * k + 1);
	if (ar == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (l = 0; l <= k && s1[l] != '\0'; l++)
	{
		ar[l] = s1[l];
	}
	for (l = 0; l <= k && s2[l] != '\0'; l++)
	{
		ar[l + i] = s2[l];
	}
	ar[k] = '\0';
	return (ar);
}
