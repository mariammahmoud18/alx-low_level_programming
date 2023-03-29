#include "main.h"
/**
* reverse_array - a function that reverses a given array.
* @a: array to be reversed.
* @n: size of the given array .
* Return: 1 if successful. 
*/

void reverse_array(int *a, int n)
{
int i;
int j;
int arr[300];

j = 0;

for (i = n - 1; i >= 0; i--)
{
 arr[j] = a[i];
 j++;
}
for (i = 0; i < n; i++)
{
a[i] = arr[i];
}
}
