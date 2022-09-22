#include "main.h"
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
int d , s;

for (d = 0 ; dest[d] ; d++);
for (s = 0 ; src[s] ; s++)
dest[d++] = src[s];
return (dest);
}
