#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combination numbers
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
int c = 0;

while (c < 10)
{
putchar(48 = c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
