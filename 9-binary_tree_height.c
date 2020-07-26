#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of binary tree
 * @tree: root node pointer
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	size_t lh = binary_tree_height(tree->left);
	size_t rh = binary_tree_height(tree->right);

	if (lh > rh)
	{
		return (lh + 1);
	}
	else
	{
		return (rh + 1);
	}
}
