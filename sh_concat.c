#include "shell.h"

/**
 * _strcat - it append two or more strings together.
 * @str1: first string to be append to.
 * @str2: second string to append.
 *
 * Return: The first string appended.
 */

char *_strcat(char *str1, char *str2)
{
	while (*str1 != '\0')
		str1++;
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return (str1);
}
