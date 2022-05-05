#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * @str: char
 * Return: NULL if str = NULL while on success, the _strdup function returns a pointer to the duplicated string. 
 * It returns NULL if insufficient memory was available
 */


char *_strdup(char *str)
{
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	return (array);
}
