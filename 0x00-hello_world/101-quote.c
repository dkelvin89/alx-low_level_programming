#include<unistd.h>
/**
 * main - Prints a text
 *
 * Return: should be 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dore Korpar, 2015-10-19\n", 59);
	return (1);
}
