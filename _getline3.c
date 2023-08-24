#include "shell.h"

/**
 * _getline3 - it helps to read an input from the keyboard.
 * @alx: serves as buffer to store what is read.
 * This return a string
 * Return: return a character string.
 */

char *_getline3(char *alx)
{

	size_t num;
	int count;

	alx = NULL;
	num = 0;

	count = getline(&alx, &num, stdin);
	if (count == -1)
	{
		perror("Error (getline)");
		free(alx);
		exit(EXIT_FAILURE);
	}
	if (alx[count - 1] == '\n')
		alx[count - 1] = '\0';
	return (alx);
}
