#include <main.h>
#include <string.h>

/**
*_strcmp - a function that compares two strings.
*@s1: first string to be compared.
*@s2: second string to be compared.
*Return: comaprison result. 
*/

int _strcmp(char *s1, char *s2)
{
int len = strlen(s1);
int len2 = strlen(s2);
int i;

for (i = 0; i < len; i++)
{
if (s1[i] == s2[i])
continue;
else
return (s1[i] - s2[i]);
}
return (0);
}
