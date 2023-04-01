#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
* rot13 - encrypt the string.
* @c: string to be encrypted.
* 
* Return: pointer to the string. 
*/

char *rot13(char *c)
{
int i;
int len = strlen(c);
char j;
for (i = 0; i < len; i++)
{
for (j = 'A'; j <= 'Z'; j++)
{
if (c[i] == j)
{
c[i] = (((c[i] % 65) + 13) % 26) + 65;
break;
}
}
if (c[i] >= 'a')
c[i] = (((c[i] % 97) + 13) % 26) + 97;
}
return (c);
}
