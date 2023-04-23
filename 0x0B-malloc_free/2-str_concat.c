#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concate two strings.
 * @s1: first string to be added.
 * @s2: second string to be added.
 * Return: NULL if error else pointer to newly concated str.
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int i;
int j = 0;
int len1;
int len2;
int size;
if (s1 == NULL)
len1 = 0;
else
len1 = strlen(s1);
if (s2 == NULL)
len2 = 0;
else
len2 = strlen(s2);
size = len1 + len2;
s = malloc(sizeof(char) * (size + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
s[i] = s1[i];
}
for (i = len1; i < size; i++)
{
s[i] = s2[j];
j++;
}
return (s);
}
