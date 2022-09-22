/**
 * print_number - Print an integer using only _putchar
 * @n: integer to print
 */

void printnumber(int i)
{
    if (i / 10 != 0)
    {
        putchar(i % 10);
        printnumber((i - i % 10) / 10);
    }
    else if ((i / 10 == 0) && (i % 10 != 0) && (i > 0))
    {
        putchar(i % 10 + '0');
    }
    else if ((i / 10 == 0) && (i % 10 != 0) && (i <= 0))
    {
        putchar('-');
        putchar(-i % 10 + '0');
    }
}
