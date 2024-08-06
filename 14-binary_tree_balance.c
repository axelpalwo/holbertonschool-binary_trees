#include "binary_trees.h"
/**
 * getheight - Gets the height of a binary tree
 * @tree: Pointer to node in tree
 * @height: Actual height of node
 * Return: Level fo height
 */
int getheight(const binary_tree_t *tree, int height)
{
	int hl = height, hr = height;

	if (tree)
	{
		if (tree->left)
			hl = getheight(tree->left, height + 1);
		if (tree->right)
			hr = getheight(tree->right, height + 1);
		if (!tree->left && !tree->right)
			hl++;
	}
	if (hl < hr)
		return (hr);
	return (hl);
}
/**
 * binary_tree_balance - Measures the balance factor
 * @tree: pointer to tree
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hl, hr;

	if (!tree)
		return (0);
	hl = getheight(tree->left, 0);
	hr = getheight(tree->right, 0);
	return (hl - hr);
}
