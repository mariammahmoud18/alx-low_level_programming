#include "main.h"
/**
 * _isalpha - checks if a given char is alphabetic.
 *
 * Return: 1 on sucess and 0 on failure.
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return 1;
else if (c >= 'A' && c <= 'Z')
return 1;
else
return 0;
}

