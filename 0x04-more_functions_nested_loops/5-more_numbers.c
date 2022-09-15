#include "main.h"
/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int i;
char c;
for (i = 0 ; i < 10 ; i++)
{
for (c = '0' ; c <= '14' ; c++)
{
if (c > 9)
{
_putchar((c / 10) + '48');
_putchar((c % 10) + '48');
}
_putchar('\n');
}
}
