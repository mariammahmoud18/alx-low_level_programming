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
char c = 97;
while (c <= 122)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
