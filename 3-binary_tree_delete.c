#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: Pointer to binary tree
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current;

	current = tree;
	if (!tree)
	{
		/* Voy todo a la izquierda */
		while (current->left)
		{
			current = current->left;
		}
		/* Subimos desde abajo un nivel a la vez y vamos liberando izq y der */
		while (current != tree)
		{
			current = current->parent;
			free(current->left);
			if (current->right)
			{
				current = current->right;
				free(current->left);
				free(current->right);
				current = current->parent;
			}
			free(current->right);
		}
		/* Voy todo a la derecha */
		while (current->right)
		{
			current = current->right;
		}
		/* Subimos desde abajo un nivel a la vez y vamos liberando izq y der */
		while (current != tree)
		{
			current = current->parent;
			free(current->right);
			if (current->left)
			{
				current = current->left;
				free(current->left);
				free(current->right);
				current = current->parent;
			}
			free(current->left);
		}
		free(tree);
	}
}
