#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any set of byters.
 * @s: string to be searched.
 * @accept: string whose bytes are used for search.
 * Return : a pointer to byte in s which match accept.
 */

char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
