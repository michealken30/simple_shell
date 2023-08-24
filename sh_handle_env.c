#include "shell.h"
/**
 * _handle_env - it prints out environment variables.
 * @argv: the list of argument vector.
 * @envp: the list of environment variables.
 * @alt: string to be freed..
 *
 * Return: does not return.
 */

void _handle_env(char **argv, char **envp, char *alt)
{
	int i;
	char **ptr;
	int len;
	(void)argv;


	ptr = envp;
	i = 0;

	while (ptr[i])
	{
		len = strlen(ptr[i]);
		write(STDOUT_FILENO, ptr[i], len);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	free(alt);
}
