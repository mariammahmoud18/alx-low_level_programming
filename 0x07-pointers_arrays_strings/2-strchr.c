#include "main.h"
#include <stdbool.h>
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to locate char in.
 * @c: character to be located.
 *
 * Return: pointer to the first occurance of c.
*/

char *_strchr(char *s, char c)
{
return (strchr(s, c));
}
