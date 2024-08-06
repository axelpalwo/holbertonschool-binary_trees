#include "binary_trees.h"
/**
 * getsize - gets size
 * @tree: node
 * @count: Count
 * Return: Size Count
 */
size_t getsize(const binary_tree_t *tree, size_t count)
{
	size_t a = count, b = count;

	if (tree)
	{
		if (tree->left)
			a += getsize(tree->left, count);
		if (tree->right)
			b += getsize(tree->right, count);
	}
	return ((a + b));
}
/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to root node
 * Return: Size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (getsize(tree, 1) / 2);
}
