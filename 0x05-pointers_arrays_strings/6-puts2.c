#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string.
 * @str: string to be printed out.
 * Return: 1 if successful.
*/

void puts2(char *str)
{
int i;
int j = 0;

while (str[j] != '\0')
{
j++;
}

for (i = 0; i < j; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

