#include "main.h"
/**
 * get_endianness - checks if the endianness is little or big
 * Return: 0 if big
 * 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
