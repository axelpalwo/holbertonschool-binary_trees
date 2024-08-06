#include "binary_trees.h"
/**
 * getheight - Gets the height of a binary tree
 * @tree: Pointer to node in tree
 * @height: Actual Height of Node
 * Return: Level of height
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
	}
	if (hl < hr)
		return (hr);
	return (hl);
}
/**
 * binary_tree_height - measures the height of a given tree
 * @tree: tree to mesure height
 * Return: height of tree or 0 on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (getheight(tree, 0));
}
