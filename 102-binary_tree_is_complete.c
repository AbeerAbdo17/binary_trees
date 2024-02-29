#include "binary_trees.h"

/**
 * binary_tree_is_complete - Check if a binary tree is complete
 * @tree: Pointer
 * Return: 1 or 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int xfront = 0, xrear = 0;
	binary_tree_t **xque;
	binary_tree_t *xcurr;

	if (tree == NULL)
		return (0);

	xque = malloc(sizeof(binary_tree_t *) * 1024);
	if (xque == NULL)
		return (0);

	xque[xrear++] = (binary_tree_t *)tree;

	while (xfront < xrear)
	{
		xcurr = xque[xfront++];

		if (xcurr == NULL)
		{
			while (xfront < xrear)
			{
				if (xque[xfront++] != NULL)
				{
					free(xque);
					return (0);
				}
			}
		}
		else
		{
			xque[xrear++] = xcurr->left;
			xque[xrear++] = xcurr->right;
		}
	}

	free(xque);
	return (1);
}
