#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concates two strings based on num of n bytes.
 * @s1: string to be fully concatenated.
 * @s2: string to be concatenated with n byted
 * Return: pointer to resulting string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int i;
int size;
int j = 0;
int len1 = strlen(s1);
int len2 = strlen(s2);
if (n > len2)
n = len2;
ptr = malloc(sizeof(char) * (len1 + n));
if (ptr == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
ptr[i] = s1[i];
}
for (i = len1; i < (len1 + n); i++ )
{
ptr[i] = s2[j];
j++;
}
return (ptr);
}
