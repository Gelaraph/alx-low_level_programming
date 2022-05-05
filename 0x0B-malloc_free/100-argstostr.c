#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Write a function that concatenates all the 
 * arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: A pointer to a new string, or NULL if it fails
 */


char *argstostr(int ac, char **av)
{
	int i, j, k;
	int sumlen = 0;
	char *arg_concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			sumlen++;
		sumlen++;
	}
	sumlen++;

	arg_concat = malloc(sumlen * sizeof(char));
	if (arg_concat == NULL)
	{
		free(arg_concat);
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			arg_concat[k] = av[i][j];
		}
		arg_concat[k] = '\n';
		k++;
	}
	return (arg_concat);
}
