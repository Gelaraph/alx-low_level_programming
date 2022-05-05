#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat: A function that concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, 
 * and null terminated if NULL is passed, treat it as an empty string.
 * The function should return NULL on failure
 */


char *str_concat(char *s1, char *s2)
{
	int end1, end2, i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (end1 = 0; end1 <= *s1; end1++)
	{
	}

	for (end2 = 0; end2 <= *s2; end2++)
	{
	}

	array = malloc(sizeof(char) * (end1 + end2 + 1));

	if (array == NULL)
		return (NULL);

	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}
	return (array);
}
