#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet letters in lowercase for 10 times.
 *
 * Return: 1 on sucess.
*/
void print_alphabet_x10(void)
{
char c = 97;
int i = 0;

while(i<10)
{
while (c <= 122)
{
_putchar(c);
c++;
}
i++;
}
_putchar('\n');
}
