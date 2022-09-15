/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: 0 for success
 */

void print_numbers(void)
{
int c;
for (c = 0 ; c <= 9 ; c++)
putchar(c + '0');
putchar("\n");
return (0);
}
