#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */
void print_alphabet(void);
{

	int j;
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
