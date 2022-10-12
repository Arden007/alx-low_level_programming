#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to array
 * @size: Size of the array
 * @action: action(function) to iterate throw array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long cLoop;

if (!array || !action)
return;

for (cLoop = 0; cLoop < size; cLoop++)
{
action(array[cLoop]);
}
}
