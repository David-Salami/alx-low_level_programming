#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int index, nflips = 0;
unsigned long int j = sizeof(unsigned long int) * 8;

for (index = 0; index < j; index++)
{
if ((m & 1) != (n & 1))
nflips += 1;
n = n >> 1;
m = m >> 1;
}
return (nflips);
}
