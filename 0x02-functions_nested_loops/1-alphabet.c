#include "main.h"
/**
 * print_alphabet - print all alphabet letters in lowercase.
 *
 * Return: 1 on sucess.
*/
void print_alphabet(void)
{
char c = 97;

while (c <= 122)
{
_putchar(c);
c++;
}
_putchar('\n');
}
