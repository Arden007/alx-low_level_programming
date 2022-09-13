#include "main.h"
/**
 * _islower - checks for lowercase character
 */

int _islower(int c)
{
int c = 'a';
if ( _islower(c) ){
printf("%c is lowercase", c);
}else{
printf("%c is uppercase", c);
}
return (0);
}
