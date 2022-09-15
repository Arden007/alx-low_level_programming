#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: 0 for success
 */

void print_numbers(void)
{
int c = 0;

do
{
_putchar(c + 48);
c++;
} while (c >= 0 && c <= 9);
_putchar('\n');
}
