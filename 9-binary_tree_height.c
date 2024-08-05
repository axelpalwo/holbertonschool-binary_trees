#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a given tree
 * @tree: tree to mesure height
 * Return: height of tree or 0 on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	size_t i = 0;

	current = tree;
	if (!tree)
		return (i);
	while (current->left && current->right)
	{
		i++;
		current = current->left;
	}
	return (i);
}
