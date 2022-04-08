#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */


/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * main: Prints a random number and states whether
 * it is positive, negetive or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes here */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	} 
	else
		printf("%d is zero\n", n);

	return (0);
}
