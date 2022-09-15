#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: 0 for success
 */

void print_numbers(void)
{
    int num = 0;

    do
    {
        _putchar(num + 48);
        num++;
    } while (num >= 0 && num <= 9);
    _putchar('\n');
}
