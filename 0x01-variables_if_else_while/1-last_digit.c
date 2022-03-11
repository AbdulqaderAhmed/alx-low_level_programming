#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time());
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	} else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 5 and not 0\n", n, last);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	return (0);
}
