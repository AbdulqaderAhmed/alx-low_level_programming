#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char alpha;

	alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');
	return (0);
}
