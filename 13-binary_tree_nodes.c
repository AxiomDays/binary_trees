#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes in a binary tree
 * @tree: pointer to root node of binary tree whose leaves are to be counted
 * Description - counts number of nodes in a binary tree
 * ie, the number of nodes with at least one child.
 * Return: the number of leaves
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_nodes;
	size_t *node_no;

	node_no = &no_nodes;
	no_nodes = 0;

	node_(tree, node_no);
	return (no_nodes);
}

/**
 * node_ - assists binary_tree_nodes function
 * @node: pointer to root node of tree
 * @node_no: pointer to int that carries number of nodes
 * Description - does the actually counting
 * Return: void
*/

void node_(const binary_tree_t *node, size_t *node_no)
{
	if (node == NULL)
		return;
	node_(node->left, node_no);
	if (node->left != NULL || node->right != NULL)
		*node_no += 1;
	node_(node->right, node_no);
}
