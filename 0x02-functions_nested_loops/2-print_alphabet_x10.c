#include "main.h"
/**
 * _iprint_alphabet_x10 - prints the alaphabet x10
 */

void print_alphabet_x10(void)
{
int tens, c;
for ( tens = 0; tens <= 9 ; tens++){
for ( c = 'a'; c <= 'z' ; c++)
{
putchar(c);
putchar('\n');
}
return (0);
}
