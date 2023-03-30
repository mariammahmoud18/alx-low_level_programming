#include "main.h"
#include <string.h>
/**
* _strcat - concatenates two strings.
* @dest: string to be concatenated to.
* @src: string to be added to original.
* Return: pointer to the concatenated string. 
*/

char *_strcat(char *dest, char *src)
{
int len = strlen(src);
int len2 = strlen(dest);
int i;

for (i = 0; i < len; i++)
{
*(dest + len2 + i) = src[i];
}
return (dest);
}
