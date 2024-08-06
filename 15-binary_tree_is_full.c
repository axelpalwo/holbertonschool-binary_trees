#include "binary_trees.h"
/**
 * getfulltree - Get if a binary tree is full
 * @tree: Pointer to node in tree
 * Return: 0 Success / 1 Failure
 */
int getfulltree(const binary_tree_t *tree, int result)
{
	if (tree)
	{
		if (tree->left)
			result *= getfulltree(tree->left, result);
		if (tree->right)
			result *= getfulltree(tree->right, result);
		if ((!tree->left && !tree->right) || (tree->left && tree->left))
			return (result * 1);
	}
	return (result * 0);
}
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to tree
 * Return: 1 Success / 0 Failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (getfulltree(tree, 1) == 1)
		return (1);

	return (0);
}
