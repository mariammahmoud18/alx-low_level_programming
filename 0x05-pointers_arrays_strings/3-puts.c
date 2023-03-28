#include "main.h"
#include <string.h>
/**
 * _puts - prints a string followed by a new line.
 * @str: string to be printed out.
 * Return: 1 if successful.
*/

void _puts(char *str)
{
int len = strlen(str);
int i;

for(i = 0; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
