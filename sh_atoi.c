#include "shell.h"
/**
 * _atoi - covert the exit status to numbers.
 * @atr: the string passed to it.
 * detail o. _atoi
 * Return: returns the status.
 */

int _atoi(char *atr)
{
	int status = EXIT_SUCCESS;
	char *ptr = atr;

	int i = 0;

	while (ptr[i])
	{
		status = status * 10 + ptr[i] - '0';
		i++;
	}
	return (status);
}
