#include "binary_trees.h"
/**
 * binary_tree_preorder - Writes a binary tree using pre-order traversal
 * @tree: Pointer to tree
 * @func: Pointer to func to print
 * Return: None
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
