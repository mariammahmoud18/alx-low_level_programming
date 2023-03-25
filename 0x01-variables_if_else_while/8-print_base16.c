#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all alphabet letters in lowercase.
 *
 * Return: Always 0.
*/
int main(void)
{
int n = 48;

while (n < 103)
{
putchar(n);
if (n == 57)
n = n + 40;
else
n++;
}
putchar('\n');
return (0);
}
