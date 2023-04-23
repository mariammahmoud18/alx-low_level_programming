#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array instialised with 0.
 * @width: number of cols.
 * @height: number of rows.
 * Return: NULL if error else pointer to newly 2d array.
*/
int **alloc_grid(int width, int height)
{
int **arr;
int i;
int j;
if (width < 0 || height < 0)
return (NULL);
arr = (int **)malloc(height * sizeof(int*));
for (i = 0; i < height; i++)
arr[i] = (int *)malloc(width * sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
