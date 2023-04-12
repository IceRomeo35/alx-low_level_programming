#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness of a machine,big or little
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	/*variable initialization*/
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
