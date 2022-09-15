/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: 0 for success
 */

void print_numbers(void)
{
int c;
do
{
_putchar(c + '0');
c++;
} while (c >= 0 && c <= 9);
_putchar('\n');
}
