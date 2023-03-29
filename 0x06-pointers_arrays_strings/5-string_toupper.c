#include "main.h"
#include <string.h>
/**
* string_toupper - changes all lowercase letters to uppercase.
* @c: array to be uppercased.
* 
* Return: pointer to the string. 
*/

char *string_toupper(char *c)
{
int len = strlen(c);
int i;

for (i = 0; i < len; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] = (c[i] % 97) + 65;
else
continue;
}
return (c);
}
