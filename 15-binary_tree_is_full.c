#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer
 * Return: 0 or 1
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			is_full_recursive(tree->left) == 0 ||
			is_full_recursive(tree->right) == 0)
	{
		return (0);
	}

	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: A pointer
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		return (is_full_recursive(tree));
	}
	return (0);
}

