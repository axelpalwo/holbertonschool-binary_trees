#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a node at the left of a parent
 * @parent: pointer to parent node
 * @value: value of new node
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	if (parent == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	} else
		new_node->right = NULL;
	parent->right = new_node;
	return (new_node);
}
