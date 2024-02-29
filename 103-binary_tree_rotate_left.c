#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer
 * Return: pointer
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *xpiv, *xtmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	xpiv = tree->right;
	xtmp = xpiv->left;
	xpiv->left = tree;
	tree->right = xtmp;
	if (xtmp != NULL)
		xtmp->parent = tree;
	xtmp = tree->parent;
	tree->parent = xpiv;
	xpiv->parent = xtmp;
	if (xtmp != NULL)
	{
		if (xtmp->left == tree)
			xtmp->left = xpiv;
		else
			xtmp->right = xpiv;
	}

	return (xpiv);
}
