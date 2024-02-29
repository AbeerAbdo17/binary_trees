#include <stdlib.h>
#include "binary_trees.h"

/**
 * bst_remove - removes a node from a Binary Search Tree
 * @root: Pointer
 * @value: input
 * Return: Pointer
 */
bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
		return NULL;

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else {
		if (root->left == NULL) {
			bst_t *xtmp = root->right;
			free(root);
			return (xtmp);
		} else if (root->right == NULL) {
			bst_t *xtmp = root->left;
			free(root);
			return (xtmp);
		}

		bst_t *xtmp = root->right;
		while (xtmp->left != NULL)
			xtmp = xtmp->left;

		root->n = xtmp->n;
		root->right = bst_remove(root->right, xtmp->n);
	}

	return root;
}