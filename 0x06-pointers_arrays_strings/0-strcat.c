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
/* first we need to determine the length of the string */
for (d = 0 ; dest[d] ; d++ );
for (s = 0 ; src[s] ; s++)
/* after we determine the length of both strings we can append the strings and to overwrite the null byte lets iterate dest*/
dest[d++] = src[s];
return (dest);
}
