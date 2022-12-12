#include "main.h"

void _puts(char *s)
{
    int c;
    for (c = 0; s[c] != 0; c++)
    {
        putchar(s[c]);
    }
    putchar('\n');
}