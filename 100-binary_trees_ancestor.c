#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: input
 * @second: input
 * Return: Pointer or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);

	ancestor = first;

	while (ancestor)
	{
		if (binary_tree_is_ancestor(ancestor, second))
			return ((binary_tree_t *)ancestor);

		ancestor = ancestor->parent;
	}

	return (NULL);
}
/**
 * binary_tree_is_ancestor - Checks if a node is an ancestor of another node
 * @ancestor: input
 * @node: input
 * Return: 1 or 0
 */

int binary_tree_is_ancestor(const binary_tree_t *ancestor,
		const binary_tree_t *node)
{
	while (node)
	{
		if (node == ancestor)
			return (1);
		node = node->parent;
	}

	return (0);
}

