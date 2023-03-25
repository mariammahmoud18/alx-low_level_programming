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

while (n <= 57)
{
putchar((char)n);
n++;
}
putchar('\n');
return (0);
}
