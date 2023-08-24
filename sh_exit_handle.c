#include "shell.h"

/**
 * _handle_exit - handle exit from the shell
 * @argv: array of vector.
 * @alt: string to be freed.
 *
 * Return - does not return.
 */

void  _handle_exit(char **argv, char *alt)

{
	int status;

	if (argv[1])
	{
		status = _atoi(argv[1]);
		free(alt);
		exit(status);
	}
	else
	{
		free(alt);
		exit(EXIT_SUCCESS);
	}
}

