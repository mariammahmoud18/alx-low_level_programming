#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all numbers.
 *
 * Return: Always 0.
*/

int main(void)
{
    int n = 0;

    while (n <= 9)
    {
            printf("%d",n);
            n++;
    }
   
    putchar('\n');
    return (0);
}
