/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @s : pointer to input char
 *
 * Return: @s
 */

char *string_toupper(char *c)
{
int i;

for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 97 && c[i] <= 122)
{
c[i] -= 32;
}
}
return (c);
}
