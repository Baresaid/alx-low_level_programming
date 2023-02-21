#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{

	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
	return (0);
}
