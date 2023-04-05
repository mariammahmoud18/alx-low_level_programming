#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string reversed.
 * @s: string to be printed.
 * Return: void.
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
