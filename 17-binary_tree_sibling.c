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
	current = node;
	if (node == current->parent->right)
		return (current->parent->right);
	if (node == current->parent->left)
		return (current->parent->right);
	return (NULL);
}
