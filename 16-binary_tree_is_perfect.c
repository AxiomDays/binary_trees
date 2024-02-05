#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of binary tree whose leaves are to be counted
 * Description - Is the tree perfect? Let's see
 * Return: 1, if perfect, 0, if not
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t is_perfect;
	size_t *to_perfect;

	to_perfect = &is_perfect;
	is_perfect = 1;

	perfect_(tree, to_perfect);
	return (is_perfect);
}

/**
 * perfect_ - assists binary_tree_is_perfect function
 * @node: pointer to root node of tree
 * @to_perfect: pointer to int that carries perfection value
 * Description - does the actually counting
 * Return: void
*/

void perfect_(const binary_tree_t *node, size_t *to_perfect)
{
	if (node == NULL)
		return;
	perfect_(node->left, to_perfect);
	if ((node->left == NULL || node->right == NULL) &&
		(binary_tree_is_leaf(node) == 0))
		*to_perfect = 0;
	perfect_(node->right, to_perfect);
}
