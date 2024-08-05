#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: Pointer to binary tree
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current;
	binary_tree_t *child;

	current = tree;
	if (tree)
	{	
		if (current->right)
		{
			child = current->right;
			free(child->right);
			free(child->left);
			free(child);
		}
		if (current->left)
		{
			child = current->left;
			free(child->right);
			free(child->left);
			free(child);
		}
		free(tree);
	}
}
