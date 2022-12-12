#include "main.h"

/**
 **_puts - it prints a string
 **@str: a pointer to an int
 **Return: void indicates a correct answer
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
