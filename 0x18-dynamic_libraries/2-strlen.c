#include "main.h"

/**
 **_strlen - the lenght of a str
 **@s: a pointer to an int
 **Return: void shows it is correct
 **/

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
