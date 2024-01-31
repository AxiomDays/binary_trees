#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node at the left of a node
 * @parent: parent node whose left arm a new node is to be added to
 * @value: value of the new node
 * Description - inserts a new left node
 * Return: pointer to new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_left;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	old_left = parent->left;
	if (old_left != NULL)
	{
		new_node->left = old_left;
		old_left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
