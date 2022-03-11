#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * description: a program that prints the alphabet
 * in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
			alpha++;
		}
	}

	putchar('\n');
	return (0);
}
