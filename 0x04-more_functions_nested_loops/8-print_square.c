#include "main.h"
/**
 * print_square - print n _.
 *@size: number of _ to be printed.
 * Return: 1 if successful.
*/
void print_square(int size)
{
int i;
int j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n')
}
