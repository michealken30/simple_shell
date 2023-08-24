#include "shell.h"

/**
 * _handle_builtins - handle the buit in command. exit and env.
 * @argv: argument vector.
 * @envp: envirment variables.
 * @alt: char string to be freed..
 *
 * Return: it returns true or false.
 */

bool _handle_builtins(char **argv, char **envp, char *alt)
{


	if (_strncmp(argv[0], "env", 3) == 0)
	{
		_handle_env(argv, envp, alt);
		return (true);
	}
	else if (_strncmp(argv[0], "exit", 4) == 0)
	{
		_handle_exit(argv, alt);
		return (true);
	}
	else
		return (false);
}
