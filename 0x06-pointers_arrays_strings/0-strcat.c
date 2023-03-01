#include "main.h"
#include  <stdio.h>

/**
 * _strcat - concatenate two strings using at most
 *
 * an inputted number of bytes from scr.
 * @dest: the string to be appended upon.
 * @src: the string to be appende to dest.
 * Return: A pointers to resulting string dest.
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0,  i;

	while (dest[dlen])
{
	dlen++;
}
	for (i  = 0; src[i] != 0; i++)
{
	dest[dlen] = src[i];
	dlen++;
}
	dest[dlen] = '\0';
	return (dest);
}
