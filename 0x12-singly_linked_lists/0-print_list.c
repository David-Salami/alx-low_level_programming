#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @n: pointer to the list.
 * Return: the number of nodes.
 **/
size_t print_list(const list_t *h)
{
size_t cont = 0, h = n;
while (n)
{
if (n->str)
printf("[%u] %s\n", n->len, n->str);
else
printf("[0] (nil)\n");
cont++;
n = n->next;
}
return (cont);
}
