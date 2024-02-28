#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: A pointer
 *
 * Return: NULL or height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t xl, xr;

	if (tree == NULL)
		return (0);

	xl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	xr = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((xl > xr) ? xl : xr);
}
