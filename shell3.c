#include "shell.h"

/**
 * main - that call other function for the shell process.
 * @argc: the argument count.
 * @av: array of strings.
 * @envp: enviromental variables.
 * Return: return an interger 0.
 */

int main(int argc, char **av, char **envp)

{
	char *alx = NULL;
	char *argv[MAX_NUMBER];
	char *alt;
	char  *delim = " ";
	int n;



	if (argc == 1)
	{
	if (isatty(STDIN_FILENO))
	while (1)
	{
		write(1, "$ ", 3);

	alt = _getline3(alx);

	n = 0;

	argv[n] = strtok(alt, delim);
	while (argv[n] != NULL)
		argv[++n] = strtok(NULL, delim);

	if (_handle_builtins(argv, envp, alt))
		continue;

	_myfork3(argv);


	free(alt);
	}
	else
		_nonit(av, envp);
	}
	return (0);

}
