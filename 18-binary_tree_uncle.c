#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to node
 * Return: Pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *current;
	binary_tree_t *sibling_of_uncle;

	if (node)
	{
		if (node->parent)
		{
			if (node->parent->parent)
			{
				sibling_of_uncle = node->parent;
				current = node->parent->parent;
				if (current->right == sibling_of_uncle)
				{
					if (current->left)
						return (current->left);
				} else
				{
					if (current->right)
						return (current->right);
				}
			}
		}
	}
	return (NULL);
}
