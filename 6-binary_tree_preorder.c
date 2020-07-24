#include "binary_trees.h"

/**
 * binary_tree_preorder - travers a tree in preorder way then passes
 * the node value to func pointer.
 * @tree: pointer to binary tree.
 * @func: pointer to function.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
