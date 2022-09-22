/**
 * _strcat - concatenates two strings by appending the source to the end destination string
 * 
 * @dest: the destination string
 * 
 * @src: the source string
 * 
 * Return: the pointer
 */

char *_strcat(char *dest, char *src)
{
int d, c;

d = 0;
while (dest[d])
d++;
for (c = 0; src[c]; c++)
dest[c++] = src[c];

return (dest);
}
