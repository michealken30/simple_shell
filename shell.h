#ifndef SHELL_H
#define SHELL_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>
#include <sys/wait.h>


#define MAX_NUMBER 100

/** Function prototypes*/


void change_directory(const char *directory);
void _myfork3(char **argv);
char *_getline3(char *alx);
void _nonit(char **argv, char **envp);
int _atoi(char *atr);
bool _handle_builtins(char **argv, char **envp, char *alt);
void _handle_env(char **argv, char **envp, char *alt);
void _handle_exit(char **argv, char *alt);
int _strncmp(char str1[], char str2[], size_t n);

#endif /* SHELL_H */

