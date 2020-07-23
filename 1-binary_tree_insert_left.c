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
	binary_tree_t *temp_node_holder;
	/* check for NULL */
	if (!parent)
		return (NULL);

	/* create new node */
	new_left_node = malloc(sizeof(binary_tree_t));
	if (!new_left_node)
		return (NULL);
	new_left_node->n = value;
	new_left_node->parent = parent;

	/* insert node */
	if (parent->left == NULL)
		parent->left = new_left_node;
	else
	{
		temp_node_holder = parent->left;
		parent->left = new_left_node;
		new_left_node->left = temp_node_holder;
		temp_node_holder->parent = new_left_node;
	}
	return new_left_node;
	
}
