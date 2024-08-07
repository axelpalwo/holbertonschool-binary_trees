#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"
/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Number to be raised
 * @y: Power
 * Return: X raised to the power of Y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return ((x * (_pow_recursion(x, y - 1))));
	else if (y < 0)
		return (-1);
	return (1);
}
/**
 * binary_tree_is_perfect - Check if its perfect
 * @tree: Pointer to tree
 * Return: 1 Success / 0 Failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaves;
	int height;

	if (tree)
	{
		leaves = binary_tree_leaves(tree);
		height = binary_tree_height(tree);
		if (_pow_recursion(2, height) == leaves)
			return (1);
	}
	return (0);
}
