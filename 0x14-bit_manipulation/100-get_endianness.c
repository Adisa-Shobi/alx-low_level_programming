#include "main.h"
#include <stdio.h>

/**
 *get_endianness - finds the endianess of processor
 *
 *
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 0x01234567, endian;
	char *p = (char *)&i;

	endian = (int)p[0] == 103 ? 1 : 0;
	return (endian);
}
