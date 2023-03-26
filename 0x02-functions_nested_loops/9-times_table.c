#include "main.h"
/**
 * times_table - prints 9 times table starting from 0.
 * 
 * Return: 1 if successfuly.
*/
void times_table(void)
{
        int sum, i, j;
        
        for (i = 0; i < 9; i++)
        {
                for (j = 0; j < 9; j++)
                {
                        sum = i * j;
                        _putchar(sum + '0');
                        if (j == 9)
                        {
                                _putchar('\n');
                                break;
                        }
                        _putchar(',');
                        _putchar(' ');
                }
        }
}

