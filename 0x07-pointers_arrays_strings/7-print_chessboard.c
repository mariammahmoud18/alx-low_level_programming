#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * print_chessboard - a function that prints a chessboard.
 * @a: chessboard as 2d array to be printed.
 * Return: void.
*/

void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
putchar(a[i][j]);
putchar('\n');
}
}
