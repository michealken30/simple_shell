#include "shell.h"

/**
 *_strlen - it helps to get the string length.
 *@str: Arguments for the _strlen.
 *Return: The length of the string.
*/

size_t  _strlen(char str[])
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
