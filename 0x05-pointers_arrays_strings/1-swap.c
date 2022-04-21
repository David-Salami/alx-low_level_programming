#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
return;

}
