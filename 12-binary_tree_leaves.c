#include "binary_trees.h"
/**
 * leaves_count - counting of leaves recursively
 * @tree: tree to count leaves on
 * @total: 0 on beggining
 * Return: result
 */
size_t leaves_count(const binary_tree_t *tree, size_t total)
{
	size_t result;

		if (tree->left)
			total += leaves_count(tree->left, total);
		result = total;
		total = 0;
		if (tree->right)
			total += leaves_count(tree->right, total);
		if (!tree->left && !tree->right)
			total++;
		result += total;
	return (result);
}
/**
 *binary_tree_leaves - count the number of leaves on the tree
 *@tree: tree to count leaves on
 *Return: number of leaves or 0 on fail
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (leaves_count(tree, 0));
}
