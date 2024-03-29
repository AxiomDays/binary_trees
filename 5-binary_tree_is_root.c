#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node to be checked
 * Description - chesks if a given node is a root
 * Return: 1, if root, 0 if not
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}

