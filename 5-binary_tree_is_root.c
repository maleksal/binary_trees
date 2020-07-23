#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if current node is the root
 * @node: pointer to the given node
 * Return: 1 f root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
	{
		if ((node->left->parent == node || !node->left)
				&& (node->right->parent == node || !node->right))
			return (1);
	}
	return (0);
}
