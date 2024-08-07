#include "binary_trees.h"
/**
 *binary_tree_sibling - find the sibling of a node
 *@node: node given to find a sibling
 *Return: sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *current;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	current = node;
	if (node == current->right)
	{
		current = current->left;
		return (current);
	}
	current = current->parent;
	if (node == current->left)
	{
		current = current->right;
		return (current);
	}
	return (NULL);
}
