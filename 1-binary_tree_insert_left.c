#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: node value
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	/* check for NULL */
	if (!parent)
		return (NULL);

	/* create new node */
	new_left_node = malloc(sizeof(binary_tree_t));
	if (!new_left_node)
		return (NULL);

	new_left_node->left = parent->left;
	/* check if parent->left has a node */
	if (new_left_node->left)
		parent->left->parent = new_left_node;

	new_left_node->parent = parent;
	new_left_node->right = NULL;
	new_left_node->n = value;
	parent->left = new_left_node;
	return (new_left_node);
}
