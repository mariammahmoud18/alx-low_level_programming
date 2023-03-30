#include "main.h"
#include <string.h>
/**
* _strncpy - copy two strings based on num of byets.
* @dest: string to be copied to.
* @src: string to be copied to original.
* @n: number of bytes to copy on.
* Return: pointer to the copied string. 
*/

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
