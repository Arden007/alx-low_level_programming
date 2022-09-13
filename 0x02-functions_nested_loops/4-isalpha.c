#include "main.h"
/**
 * _isalpha - checks if character is a letter
 * both lowercase or uppercase
 * @c: takes input from other functions.
 */

int _isalpha(int c)
{
if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
return (1);
return (0);
}
