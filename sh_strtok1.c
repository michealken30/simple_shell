#include "shell.h"

/**
 * _strtok1 - it token the string to get the numbers.
 * @alt: the string to be tokenized.
 *
 * Return: return the count of string.
 */

int _strtok1(char *alt)
{
	char *str = alt;
	char  *delim = " ";
	char *token;
	int j=0;

	token = strtok(str,delim);
	while (token != NULL)
	{
		j++;
		token = strtok(NULL, delim);
	}

	return j;
}	
	
