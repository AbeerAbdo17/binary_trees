#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: Pointer
 * @size: input
 * Return: Pointer
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *xroot = NULL;
	size_t xv;

	if (!array || size == 0)
		return (NULL);

	for (xv = 0; xv < size; xv++)
	{
		if (bst_insert(&xroot, array[xv]) == NULL)
			return (NULL);
	}

	return (xroot);
}
