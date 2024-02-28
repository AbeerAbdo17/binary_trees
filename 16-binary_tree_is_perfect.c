#include "binary_trees.h"

/**
 * binary_tree_height - find the height
 * @tree: Pointer
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t xleft_height, xright_height;

	if (tree == NULL)
		return (0);

	xleft_height = binary_tree_height(tree->left);
	xright_height = binary_tree_height(tree->right);

	return ((xleft_height > xright_height ? xleft_height : xright_height) + 1);
}

/**
 * binary_tree_size - find the size
 * @tree: Pointer
 * Return: Size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	{
		size_t xheight, xsize;

		if (tree == NULL)
			return (0);

		xheight = binary_tree_height(tree);
		xsize = binary_tree_size(tree);

		return ((xsize == ((size_t)1 << xheight) - 1));
	}
}
