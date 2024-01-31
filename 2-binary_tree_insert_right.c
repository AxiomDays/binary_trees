#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node at the right of a node
 * @parent: parent node whose right arm a new node is to be added to
 * @value: value of the new node
 * Description - inserts a new right node
 * Return: pointer to new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_right;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	old_right = parent->right;
	if (old_right != NULL)
	{
		new_node->right = old_right;
		old_right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
