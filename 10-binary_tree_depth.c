#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - computes the depth of a binary tree node
 * @tree: pointer to the node
 * Description - uses while loop to measure the depth of a
 * binary tree node
 * Return: int; depth of binary tree node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
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

