#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdub - duplicate a string.
 * @str: string to be dublicated.
 * Return: pointer to deublicate string.
*/
char *_strdup(char *str)
{
int i;
int len;
if (str == NULL)
return (NULL);
len = strlen(str);
char *s;
s = malloc(sizeof(char) * len);
for (i = 0; i < len; i++)
{
s[i] = str[i];
}
return (s);
}
