#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor
 * @tree: A pointer
 * Return: 0 or balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer
 * Return: 0 or height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t xl = 0, xr = 0;

		xl = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		xr = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((xl > xr) ? xl : xr);
	}
	return (0);
}
