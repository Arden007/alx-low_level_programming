#include "main.h"
/**
 *_puts - prints a string, to stdout
 *@str: value to be evaluate.
 *Return: Always 0 (Success)
 */

void _puts(char *s)
{
int c;
for (c = 0; s[c] != 0; c++)
{
putchar(s[c]);
}
putchar('\n');
}
