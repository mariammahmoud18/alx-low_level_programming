#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * _puts_recursion - prints a string followed by a newline.
 * @s: string to be printed.
 * Return: void.
*/

void _puts_recursion(char *s)
{
char *ptr;
ptr = s;
ptr = s;

if (*ptr == '\0')
{
_putchar('\n');
return;
}
_putchar(*ptr);
ptr++;
_puts_recursion(ptr);
}
