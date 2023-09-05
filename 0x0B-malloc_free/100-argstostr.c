#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *tape;
	int i, n, r = 0, l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	tape = malloc(sizeof(char) * l + 1);

	if (tape == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		{
		for (n = 0; av[i][n]; n++)
			;
		}
		tape[r] = av[i][n];
		r++;
	}

	if (tape[r] == '\0')
	{
		tape[r++] = '\n';
	}
	return (tape);
}
