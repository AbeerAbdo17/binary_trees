#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer
 * Return: pointer
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *xpiv, *xtmp;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	xpiv = tree->left;
	xtmp = xpiv->right;
	xpiv->right = tree;
	tree->left = xtmp;
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

