#include "main.h"

/**
 * _abs - computes the absolute
 *       value of an integer
 *
 * @n: takes input number as integer
 *
 * Return: Absolute value
 */

int _abs(int n)
{
if (n < 0)
n = (-1) * n;
return (n);
}
