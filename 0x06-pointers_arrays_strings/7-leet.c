#include "main.h"
#include <string.h>
/**
* leet - ecnode a string into 1337.
* @c: string to be encoded.
* 
* Return: pointer to the string. 
*/

char *leet(char *c)
{
int len = strlen(c);
int i;
int j;
char temp[20] = {'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o', '0', 'O', '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};


for (i = 0; i < len; i++)
{
for (j = 0; j < 20; j = j + 2)
{
if (c[i] == temp[j])
c[i] = temp[j + 1];
}
}
return (c);
}
