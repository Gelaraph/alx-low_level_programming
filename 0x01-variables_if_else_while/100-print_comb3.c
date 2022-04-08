#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1;
	int digit2;

	digit1 = 48;
	digit2 = 48;
	while  ((digit1 < 58) && (digit2 < 58))
	{
		putchar(digit1);
		putchar(digit2);
		if ((digit1 == 57) && (digit2 == 57))
		{
			putchar('\n');
			digit1++;
			digit2++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (digit2 < 57)
			{
				digit2++;
			}
			else
			{
				digit2 = 48;
				digit1++;
			}
		}

	}

	return (0);
}
