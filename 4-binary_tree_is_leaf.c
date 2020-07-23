#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf or not
 * @node: pointer to node
 * Return: 1 if leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* check right nd left nodes */
	if (!node->left && !node->right)
		return (1);
	return (0);

}
