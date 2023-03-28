#include "main.h"
/**
 * print_diagonal - print n _.
 *@n: number of _ to be printed.
 * Return: 1 if successful.
*/
void print_diagonal(int n)
{
int i;
int j;

if (n > 0)
{
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++) 
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
else
putchar('\n');
}
