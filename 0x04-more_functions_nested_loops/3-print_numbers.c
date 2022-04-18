#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
int i;

i = 0;

for (i = 0; i <= 9; i++)

_putchar(i + '0');

_putchar ('\n');
}
