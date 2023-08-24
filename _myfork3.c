#include "shell.h"

/**
 *_myfork3 - it helps execute commands using process.
 *@argv: array of vector containing the command to be executed.
 * @ string
 *Return - does not return.
 */

void _myfork3(char **argv)

{
	int status;
	pid_t child;

	child = fork();

	if (child == -1)
	{
		perror("error: fork");
		exit(EXIT_FAILURE);
	}
	if (child == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{

			write(1, "./hsh: No such file or directory", 33);
			write(STDOUT_FILENO, "\n", 1);

			exit(0);
		}

	}
	else
		if (waitpid(child, &status, 0) == -1)
		{
			perror("error: wait");
			exit(EXIT_FAILURE);
		}




}
