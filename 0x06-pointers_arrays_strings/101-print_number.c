/**
 * print_number - Print an integer using only _putchar
 * @n: integer to print
 */

void print_number(int n)
{

    if (n < 0)
    {
        putchar('-');
        n = -n;
    }

    if (n == 0)
        putchar('0');

    if (n / 10)
        printnumber(n / 10);

    putchar(n % 10 + '0');
}

