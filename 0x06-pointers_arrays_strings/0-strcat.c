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
/* first we need to determine the length of the string without null character('\0') */
for (d = 0 ; dest[d] != '\0' ; d++);
for (s = 0 ; dest[s] != '\0' ;)
/* after we determine the length of both strings we can append the strings*/
{
dest[d] = src[s];
d++;
}
/* after we append the string we set the null character equal to the destination*/
dest[d] = '\0';
return (dest);
}
