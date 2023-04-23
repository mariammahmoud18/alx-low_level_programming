#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * create_array - create arr of chars and intialise it with a specicf char.
 * @size: size of array.
 * @c: char to intialise it with.
 * Return: NULL if size 0 else ptr to arr.
*/
char *create_array(unsigned int size, char c)
{
char *s;
int i;
s = malloc(size);
if (s == NULL)
return NULL;
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
