#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: node whose uncle is to be found
 * Description - finds the uncle of a node
 * Return: pointer to uncle of node, or NULL if none
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *st_par1;
	binary_tree_t *st_par2;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	st_par2 = node->parent;
	st_par1 = node->parent->parent;
	if (st_par2 == st_par1->right)
		return (st_par1->left);
	else
		return (st_par1->right);

}
