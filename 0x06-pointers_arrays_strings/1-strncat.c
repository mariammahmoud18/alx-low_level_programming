#include "main.h"
#include <string.h>
/**
* _strncat - concatenates two strings based on num of byets.
* @dest: string to be concatenated to.
* @src: string to be added to original.
* @n: number of bytes to cat on.
* Return: pointer to the concatenated string. 
*/

char *_strncat(char *dest, char *src, int n)
{
int len1 = strlen(dest);
int len2 = strlen(src);
int i;

for (i = 0; i < n; i++)
{
if (i <= len1)
*(dest + len1 + i) = src[i];
else 
break;
}
return (dest);
}
