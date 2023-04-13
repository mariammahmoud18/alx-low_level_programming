#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * main - print the number of arguments followed by a new line.
 * @argc: number of arguments passed to the file.
 * @argv: array of string of arguments.
 * Return: 0 if successful.
*/

int main(int argc, char  __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
