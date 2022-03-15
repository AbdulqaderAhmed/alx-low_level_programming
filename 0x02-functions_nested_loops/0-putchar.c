#include "main.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char a[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		char b[7]= a[c];
	}
	_putchar(b);
	_putchar('\n');
	
	return (0);
}