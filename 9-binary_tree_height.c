#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of binary tree
 * @tree: root node pointer
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (!tree)
	{
		return (0);
	}

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh > rh)
	{
		return (lh + 1);
	}
	else
	{
		return (rh + 1);
	}
}
