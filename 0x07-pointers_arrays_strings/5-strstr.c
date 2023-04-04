#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - locates a substring.
 * @haystack: string to be searched.
 * @needle: substring to be found.
 * Return: pointer to the begginig of located substring.
 */

char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
