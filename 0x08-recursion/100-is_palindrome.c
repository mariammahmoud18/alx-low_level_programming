#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome - check if a given string is palindrome.
 * @s: string to be checked.
 * Return: 0 if not pali, 1 if pali.
*/
int panid (char *str, int s, int e)
{
if (s == e)
return (1);
if (str[s] != str[e])
return (0);
if (s < e + 1)
return (panid(str, s + 1, e - 1));
return (1);
}
int is_palindrome(char *s)
{
int len = strlen(s);
return (panid(s, 0 ,len - 1));
}
