#include "binary_trees.h"

/**
 * binary_tree_levelorder - Perform level-order traversal on a binary tree
 * @tree: Pointer to the root node
 * @func: Pointer to a function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_t **xqeu = malloc(sizeof(binary_tree_t *) * 1024);

	if (xqeu == NULL)
		return;

	int xfront = 0, xrear = 0;

	xqeu[xrear++] = (binary_tree_t *)tree;

	while (xfront < xrear)
	{
		binary_tree_t *current = xqeu[xfront++];

		func(current->n);

		if (current->left != NULL)
			xqeu[xrear++] = current->left;

		if (current->right != NULL)
			xqeu[xrear++] = current->right;
	}

	free(xqeu);
}
