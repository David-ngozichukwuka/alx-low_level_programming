#include "function_pointers.h"
/**
* int_index - ...
* @array: ...
* @size: ...
* @cmp: ...
*
* Return: ...
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int arr = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (arr < size)
			{
				if (cmp(array[arr]))
					return (arr);
				arr++;
			}
		}
	}

	return (-1);
}
