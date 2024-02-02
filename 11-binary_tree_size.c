#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - counts the size in a binary tree
 * @tree: pointer to root node of binary tree whose leaves are to be counted
 * Description - counts leaves, basically
 * Return: the number of leaves
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t no_leaves;
	size_t *leaf_no;

	leaf_no = &no_leaves;
	no_leaves = 0;

	leaf_(tree, leaf_no);
	return (no_leaves);
}

/**
 * leaf_ - assists binary_tree_leaves function
 * @node: pointer to root node of tree
 * @leaf_no: pointer to int that carries number of leaves
 * Description - does the actually counting
 * Return: void
*/

void leaf_(const binary_tree_t *node, size_t *leaf_no)
{
	if (node == NULL)
		return;
	leaf_(node->left, leaf_no);
	*leaf_no += 1;
	leaf_(node->right, leaf_no);
}
