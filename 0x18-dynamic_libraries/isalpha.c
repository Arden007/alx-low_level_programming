#include "main.h"
/**
 * _isalpha - checks if character is a letter
 * both lowercase or uppercase
 * @c: takes input from other functions.
 * Return: 1 for letters. Returns 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
