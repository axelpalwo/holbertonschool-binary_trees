#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 * @tree: poiner to node
 * Return: depth of a node or 0 on failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	size_t i = 0;

	if (!tree)
		return (0);
	current = tree;
	while (current->parent)
	{
		current = current->parent;
		i++;
	}
	return (i);
}
