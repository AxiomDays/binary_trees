#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - computes the height of a binary tree
 * @tree: pointer to root node of binary tree whose leaves are to be counted
 * Description - computes binary tree height
 * Return: the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t no_height;
	size_t *height_no;

	height_no = &no_height;
	no_height = 0;

	height(tree, height_no, tree);
	return (no_height);
}

/**
 * height - assists binary_tree_height function
 * @node: pointer to node of tree
 * @root: pointer to root node of tree
 * @height_no: pointer to int that carries height of tree
 * Description - Uses the depth-calculating function to compute the
 * height of a tree
 * Return: void
*/

void height(const binary_tree_t *node, size_t *height_no, const binary_tree_t
*root)
{
	if (node == NULL)
		return;
	height(node->left, height_no, root);
	if (binary_tree_is_leaf(node) == 1 && binary_tree_relative_depth(node,
		root) > *height_no)
	{
		*height_no = binary_tree_relative_depth(node, root);
	}
	height(node->right, height_no, root);
}


/**
 * binary_tree_relative_depth - computes the depth of a binary tree node
 * relative to another node
 * @tree: pointer to the node
 * @root: pointer to reference node
 * Description - uses while loop to measure the depth of a
 * binary tree node
 * Return: int; depth of binary tree node
*/

size_t binary_tree_relative_depth(const binary_tree_t *tree,
const binary_tree_t *root)
{
	const binary_tree_t *iter;
	size_t depth;

	depth = 0;

	if (tree == NULL)
		return (0);
	iter = tree;
	while (iter->parent != NULL && iter != root)
	{
		iter = iter->parent;
		depth++;
	}
	return (depth);
}

