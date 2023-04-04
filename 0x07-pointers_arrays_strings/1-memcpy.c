#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * _memcpy - copies memory area.
 * @dest: string to be added to.
 * @src: string to be added to dest.
 * @n: number of bytes to be copied.
 * Return: pointer to the memory area of s.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
