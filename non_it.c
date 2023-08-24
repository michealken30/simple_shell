#include "shell.h"
/**
 *_nonit - it allows the shell work in non interactive.
 *@av: argument vector,
 *@envp: access the environment variables.
 *Return: does not return;
 */


void _nonit(char **av, char **envp)
{
	char *delim;
	int n;
	char *alt;
	char *argv[MAX_NUMBER];
	char *alx;
	(void)av;
	(void)envp;


	alx = NULL;
	delim = " ";


	alt = _getline3(alx);
	n = 0;
	argv[n] = strtok(alt, delim);
	while (argv[n] != NULL)
		argv[++n] = strtok(NULL, delim);

	_myfork3(argv);

	free(alt);
}
