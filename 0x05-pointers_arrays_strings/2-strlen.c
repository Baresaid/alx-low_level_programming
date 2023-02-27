#include <stdio.h>

/**
 * _strlen - Fuction that returns the lenght of astring.
 * @str: The string to get the length of
 * Return: The length of @str.
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

