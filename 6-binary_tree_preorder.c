#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree through
 * preorder
 * @tree: pointer to root node of tree to be traversed
 * @func: function to be executed
 * Description - traverses a binary tree
 * Return: void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((func != NULL) && (tree != NULL))
		do_traverse(tree, func);
}

/**
 * do_traversal - assists binary_tree_leaves function
 * @tree: pointer to root node of tree
 * @func: the number of leaves
 * Description - does the actually counting
 * Return: number of leaves
*/

void do_traverse(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	do_traverse(tree->left, func);
	(*func)(tree->n);
	do_traverse(tree->right, func);
	return;
}
