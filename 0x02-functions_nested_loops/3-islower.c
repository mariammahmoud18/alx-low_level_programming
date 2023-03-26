#include "main.h"
/**
 * _islower - checks if a given char is lowercase or not.
 *
 * Return: 1 on sucess and 0 on failure.
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return 1;
else
return 0;
}
