#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print if the number is negative
 * or postive and equals with zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is postive", n);
	} else if (n == 0)
	{
		printf("%i is zero", n);
	} else
	{
		printf("%i is negative", n);
	}
	return (0);
}
