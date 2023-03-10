#include "main.h"

/**
 * _strcmp - compares pointesr to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
* Return: If str1 < str2, the negative difference firts unmatched characters.
 * if str1 == str2, 0.
 * if str1 > str2, the positive difference of the firts unmatched charecters.
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
