#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor
 * @tree: A pointer
 * Return: 0 or balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
