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
	size_t o = 0;

	current = tree;
	if (!tree)
		return (i);
	while (current->left && current->right)
	{
		i++;
		current = current->left;
	}
	current = tree;
	while (current-right && current->left)
	{
		o++;
		current = current->right;
	}
	if (o < i)
		return (i);
	return (o);
}
