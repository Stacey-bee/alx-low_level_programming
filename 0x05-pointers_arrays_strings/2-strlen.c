#include "holberton.h"

/**
 *_strlen - length of a string
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0') /*Count characters of the string*/
	{
		i++;
	}
	return (i);
}
