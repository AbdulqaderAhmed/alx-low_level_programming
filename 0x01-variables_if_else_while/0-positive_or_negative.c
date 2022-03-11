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
		printf("number is postive");
	} else if (n == 0)
	{
		printf("number is zero");
	} else
	{
		printf("number is negative");
	}
	return (0);
}
