#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a full binary tree
 * traversing tree goes from left-right-delete
 * @tree: pointer to the root node of tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* check for NULL */
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
