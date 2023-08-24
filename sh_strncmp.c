#include "shell.h"
/**
 * _strncmp - it compares two string together.
 * @str3: first string to be compared.
 * @str4: second string to be compared.
 * @n: number of characeters to compared.
 *
 * Return: returns the string if same or not.
 */

int _strncmp(char str3[], char str4[], size_t n)
{
	size_t i = 0;

	while (i < n)

	{
		if (str3[i] != str4[i])

		{
			return (str3[i] - str4[i]);
		}

		else if (str3[i] == '\0')

		{
			return (0);
		}
		i++;
	}

	return (0);
}
