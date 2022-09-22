/**
 * print_number - Print an integer using only _putchar
 * @n: integer to print
 */

void print_number(int i)
{
    {
        if (i / 10 != 0)
        {
            putchar(i % 10);
            print_number((i - i % 10) / 10);
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
}
