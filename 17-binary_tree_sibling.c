#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a
 * binary tree
 * @node: node whose sibling is to be found
 * Description - finds the sibling of a node in a binary tree
 * Return: a pointer to the sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *st_par;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	st_par = node->parent;
	if (node == st_par->right)
		return (st_par->left);
	else
		return (st_par->right);
}
