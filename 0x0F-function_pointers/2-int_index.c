#include <stdlib.h>
/**
 * int_index - a function that searches for an integer.
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: cmp(function) to compare the elements throw array
 * Return: The index of the first element for witch the cmp function
 * does not return 0; -1 if no elements matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int cLoop;

if (size <= 0 || !array || !cmp)
return (-1);

for (cLoop = 0; cLoop < size; cLoop++)
{
if (cmp(array[cLoop]))
return (cLoop);
}

return (-1);
}
