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
	size_t node_depth;
	size_t *even_depth;


	to_perfect = &is_perfect;
	even_depth = &node_depth;
	is_perfect = 1;
	node_depth = 0;

	perfect_(tree, to_perfect, even_depth);
	return (is_perfect);
}

/**
 * perfect_ - assists binary_tree_is_perfect function
 * @node: pointer to root node of tree
 * @to_perfect: pointer to int that carries perfection value
 * @even_depth: pointer to integer
 * Description - does the actually counting
 * Return: void
*/

void perfect_(const binary_tree_t *node, size_t *to_perfect,
size_t *even_depth)
{
	if (node == NULL)
		return;
	perfect_(node->left, to_perfect, even_depth);
	if ((node->left == NULL || node->right == NULL) &&
		(binary_tree_is_perfect_leaf(node) == 0))
		*to_perfect = 0;
	if (binary_tree_is_perfect_leaf(node) == 1)
	{
		if ((binary_tree_perfect_depth(node) != *even_depth) &&
			(*even_depth != 0))
			*to_perfect = 0;
		else
			*even_depth = binary_tree_perfect_depth(node);
	}
	perfect_(node->right, to_perfect, even_depth);
}

/**
 * binary_tree_is_perfect_leaf - checks if a node is a leaf
 * @node: node to be checked
 * Description - shecks a node to see if it is a leaf
 * Return: 1, if leaf, 0, if otherwise.
*/

int binary_tree_is_perfect_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	else
		return (0);
}

/**
 * binary_tree_perfect_depth - computes the depth of a binary tree node
 * @tree: pointer to the node
 * Description - uses while loop to measure the depth of a
 * binary tree node
 * Return: int; depth of binary tree node
*/

size_t binary_tree_perfect_depth(const binary_tree_t *tree)
{
	const binary_tree_t *iter;
	size_t depth;

	depth = 0;

	if (tree == NULL)
		return (0);
	iter = tree;
	while (iter->parent != NULL)
	{
		iter = iter->parent;
		depth++;
	}
	return (depth);
}

