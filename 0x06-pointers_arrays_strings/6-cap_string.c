#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
* cap_string - captalize all words of a string.
* @c: string to be captalized.
* 
* Return: pointer to the string. 
*/

char *cap_string(char *c)
{
int len = strlen(c);
int i;
int j;
bool flag;
char temp[13] = {'\n', '\t', '.' ,'!', '?', ',', ';', '"', '{', '}', '(', ')', ' '};


for (i = 0; i < len; i++)
{
for (j = 0; j < 13; j++)
{
if (c[i] == temp[j])
{
flag = true;
break;
}
else
flag = false;
}
if (flag  && (c[i + 1] >= 'a' && c[i + 1] <= 'z') )
c[i + 1] = (c[i + 1] % 97) + 65;
}
return (c);
}
