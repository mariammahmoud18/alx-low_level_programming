#include "stdio.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse.
 * @s: string to be printed out.
 * Return: 1 if successful.
*/

void print_rev(char *s)
{
int len = strlen(s);
int i;

for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
