#include "main.h"
/**
 * print_line - print n _.
 *@n: number of _ to be printed.
 * Return: 1 if successful.
*/
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
