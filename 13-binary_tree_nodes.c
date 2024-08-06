#include "binary_trees.h"
/**
 * node_with_child_count - Count nodes with childs
 * @tree: Pointer to tree
 * @total: total of nodes
 * Return: result
 */
size_t node_with_child_count(const binary_tree_t *tree, size_t total)
{
	size_t result;

	if (tree->left)
		total += node_with_child_count(tree->left, total);
	result = total;
	total = 0;
	if (tree->right)
		total += node_with_child_count(tree->right, total);
	if (tree->left || tree->right)
		total++;
	result += total;
	return (result);
}
/**
 * binary_tree_nodes - Count nodes with childs
 * @tree: Pointer to tree
 * Return: Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (node_with_child_count(tree, 0));
}
