#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * _memset - fits memeory with constant byte.
 * @s: string to be used.
 * @b: constant byte to fill the string.
 * @n: number of bytes to be filled.
 * Return: pointer to the memory area of s.
*/

char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
