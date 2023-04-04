#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - get length of a prefix substring.
 * @s: intial string.
 * @accept: substring.
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
