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
return (strncat(dest, src, n));
}
