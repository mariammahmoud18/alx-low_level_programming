#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _calloc -  a function that allocates memory for an array.
 * @nmemb: size.
 * @size: size to be used.
 * Return: pointer to address.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = calloc(nmemb, size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
