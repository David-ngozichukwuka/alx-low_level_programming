#include "function_pointers.h"
/**
* array_iterator - a function given as
* parameter on each element of an array.
*
* @array: array to execute function on
* @size: array size
* @action:  pointer to the function needed for use
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		a = 0;
		while (a < size)
		{
			action(array[a]);
			a = a + 1;
		}
	}
}

