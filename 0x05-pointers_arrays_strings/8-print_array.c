#include "stdio.h"
#include "main.h"
/**
 * print_array - prints n elements of array.
 * @a: array to be printed.
 * @n: number of elements to be printed.
 * Return: 1 if successful.
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n ; i++)
{
if (i == n - 1)
printf("%d", a[i]);
else
printf("%d, ", a[i]);
}
printf("\n");
}
