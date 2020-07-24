#include "binary_trees.h"

/**
 * binary_tree_inorder - travers a tree in "inorder" way then passes
 * the node value to func pointer
 * @tree: pointer to binary tree
 * @func: pointer to function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
