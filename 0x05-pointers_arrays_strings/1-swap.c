#include "main.h"
/**
 * swap_int - swap the values of two integers.
 * @a: values to be swapped.
 * @b: value to be swapped.
 * Return: 1 if successfuly.
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
