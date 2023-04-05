#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * _strlen_recursion - return the length of a string.
 * @s: string to bcount its length.
 * Return: length of s.
*/

int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
}
