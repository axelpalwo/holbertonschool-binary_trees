#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Node
 * Return: 1 Success / 0 Failure
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
		if (!node->parent)
			return (1);
	return (0);
}
