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
}
