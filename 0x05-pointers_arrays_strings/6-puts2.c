#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string, starting with the first character.
 * @str: string to be printed out.
 * Return: 1 if successful.
*/

void puts2(char *str)
{
char *ptr = str;
int len = strlen(str);

while(*ptr <= str[len - 1])
{
_putchar(*ptr);
ptr++;
ptr++;
}
_putchar('\n');
}
