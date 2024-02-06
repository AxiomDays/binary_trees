#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node of binary tree whose leaves are to be counted
 * Description - checks if a binary tree has nodes with either two or zero
 * children
 * Return: 1, if full, 0 of not
*/

size_t binary_tree_is_full(const binary_tree_t *tree)
{
	size_t is_full;
	size_t *full_ptr;

	full_ptr = &is_full;
	is_full = 1;

	if (tree == NULL)
		return (0);

	full(tree, full_ptr);
	return (is_full);
}

/**
 * full - assists binary_tree_is_full function
 * @node: pointer to root node of tree
 * @full_ptr: pointer to int
 * Description - does the actual traversal
 * Return: void
*/

void full(const binary_tree_t *node, size_t *full_ptr)
{
	if (node == NULL)
		return;
	full(node->left, full_ptr);
	if (!((node->left != NULL && node->right != NULL) || (node->left ==
		NULL && node->right == NULL)))
	{
		*full_ptr = 0;
	}
	full(node->right, full_ptr);
}
