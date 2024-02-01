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
	no_leaves = 0;

	no_leaves = leaf(tree, 0);
	return (no_leaves);
}

/**
 * my_leaf - assists binary_tree_leaves function
 * @node: pointer to root node of tree
 * @leaf: the number of leaves
 * Description - does the actually counting
 * Return: number of leaves
*/

size_t leaf(const binary_tree_t *node, size_t leaf_no)
{
	leaf_num = leaf_no;
	if (node == NULL)
		return (leaf_num);
	leaf(node->left, leaf_num);
	if ((node->left == NULL) && (node->right == NULL))
		leaf_num += 1;
	leaf(node->right, leaf_num);
	return (leaf_num);
}
