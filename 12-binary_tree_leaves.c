#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in a binary tree
 * @tree: pointer to root node of binary tree whose leaves are to be counted
 * Description - counts leaves, basically
 * Return: the number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no_leaves;
	size_t *leaf_no;

	leaf_no = &no_leaves;
	no_leaves = 0;

	leaf(tree, leaf_no);
	return (no_leaves);
}

/**
 * leaf - assists binary_tree_leaves function
 * @node: pointer to root node of tree
 * @leaf_no: pointer to int that carries number of leaves
 * Description - does the actually counting
 * Return: void
*/

void leaf(const binary_tree_t *node, size_t *leaf_no)
{
	if (node == NULL)
		return;
	leaf(node->left, leaf_no);
	if ((node->left == NULL) && (node->right == NULL))
		*leaf_no += 1;
	leaf(node->right, leaf_no);
}
