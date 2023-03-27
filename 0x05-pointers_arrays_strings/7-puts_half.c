#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, if odd then len = (len-1)/2.
 * @str: string to be half printed out.
 * Return: 1 if successful.
*/

void puts_half(char *str)
{
int len = strlen(str);
int len2;
char *ptr = str;
if (len % 2 != 0)
len2 = (len - 1) / 2;
else
len2 = len / 2;

while(len2 > 0)
{
*ptr++;
len2--;
}
while (*ptr <= str [len - 1])
{
putchar(*ptr);
*ptr++;
}
putchar('\n');
}
