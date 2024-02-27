#include "binary_trees.h"

/**
 *  * binary_tree_node -  function that creates a binary tree node
 *   * @parent: A pointer
 *    * @value: input
 *     * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	nw = malloc(sizeof(binary_tree_t));
	if (nw == NULL)
		return (NULL);

	nw->n = value;
	nw->parent = parent;
	nw->left = NULL;
	nw->right = NULL;

	return (nw);
}
