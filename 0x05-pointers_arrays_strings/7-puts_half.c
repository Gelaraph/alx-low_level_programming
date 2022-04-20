#include "main.h"

/**
 * puts_half - prints the second half of a string
 * If the number of characters is odd, the function should print the last n characters of the string, 
 * where n = (length_of_the_string - 1) / 2
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int j, i = 0;

	while (*(str + i))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
