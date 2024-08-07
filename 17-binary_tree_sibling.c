#include "binary_trees.h"
/**
 *binary_tree_sibling - find the sibling of a node
 *@node: node given to find a sibling
 *Return: sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *current;

	if (!node || !node->parent)
		return (NULL);
	current = node->parent;
	if (current->right && current->left)
	{
		if (node == current->right)
			return (current->left);
		if (node == current->left)
			return (current->right);
	}
	return (NULL);
}
