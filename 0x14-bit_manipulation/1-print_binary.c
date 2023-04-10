#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *  @n: number to print in binary
 *
 *   Return: Always 0.
 */
void print_binary(unsigned long int n)
{
int i, j, k;
unsigned long int mask = 1UL << 63;

for (i = 0; i < 64; i++)
{
if ((n & mask) != 0)
{
_putchar('1');
j = 1;
}
else if (j == 1)
_putchar('0');
mask = mask >> 1;
}
if (j != 1)
_putchar('0');
}
