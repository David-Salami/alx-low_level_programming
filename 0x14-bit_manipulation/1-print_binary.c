#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
int index, count = 0;
unsigned long int current;

for (index = 63; index >= 0; index--)
{
current = n >> index;

if (current & 1)
{
putchar('1');
count++;
}
else if (count)
putchar('0');
}
if (!count)
putchar('0');
}
