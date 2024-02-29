#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst - check if a binary tree is a valid BST
 * @tree: pointer
 * @lo: input
 * @hi: input
 * Return: 0 or 1
 */
int is_bst(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst(tree->left, lo, tree->n - 1) &&
				is_bst(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - hecks if a binary tree is a valid Binary Search Tree
 * @tree: pointer
 * Return: 0 or 1
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}

