#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_prime_number - check if a given number is prime or not.
 * @n: number to be checked.
 * Return: 0 if not prime, 1 if prime.
*/

int is_prime_number(int n)
{
if (n <= 11 || (n % 2 == 0 && n > 2) || (n % 3 == 0 && n > 3) || (n % 5 == 0 && n > 5) || (n % 7 == 0 && n > 7)) 
return (0);
else
return (1);
}
