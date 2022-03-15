#include "main.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char h[] = "_putchar";
	int m;

	m = 0;

	while (m <= 7)
	{
		_putchar(h[m]);
		m++;
	}
	_putchar('\n');
	return (0);
}