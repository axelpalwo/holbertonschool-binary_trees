#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: value of new node
 * Return: pointer to node or NULL
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL)
	{
		if (parent->left)
			parent->right = new_node;
		else
			parent->left = new_node;
		new_node->parent = parent;
	}
	return (new_node);
}
