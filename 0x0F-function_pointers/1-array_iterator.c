#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end_array = array + size - 1;

	if (array && size && action)
		while (array <= end_array)
			action(*array++);
}
