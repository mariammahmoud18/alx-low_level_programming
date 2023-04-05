#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * factorial - return factorial of a given num.
 * @n: number to count its factorial.
 * Return: factorial of n.
*/

int factorial(int n){
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return 1;
return (n * factorial(n - 1));
}
