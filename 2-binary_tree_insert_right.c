#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node
 * @value: node value
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	/* check for NULL */
	if (!parent)
		return (NULL);

	/* create new node */
	new_right_node = malloc(sizeof(binary_tree_t));
	if (!new_right_node)
		return (NULL);

	new_right_node->right = parent->right;
	/* check if parent->right has a node */
	if (new_right_node->right)
		parent->right->parent = new_right_node;

	new_right_node->parent = parent;
	new_right_node->left = NULL;
	new_right_node->n = value;
	parent->right = new_right_node;
	return (new_right_node);
}
