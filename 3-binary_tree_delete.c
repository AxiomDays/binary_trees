#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: tree to be deleted
 * Description - deletes an entire binary tree and frees
 * the relevant spaces
 * Return: none
*/

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *st_par;
	binary_tree_t *iter;

	iter = tree;
	while (iter != NULL)
	{
		if (iter->left != NULL)
		{
			iter = iter->left;
			continue;
		}
		else if (iter->right != NULL)
		{
			iter = iter->right;
			continue;
		}
		else
		{
			st_par = iter->parent;
			if (st_par == NULL)
			{
				free(iter);
				break;
			}
			if (iter == st_par->right)
				st_par->right = NULL;
			else
				st_par->left = NULL;
			iter->parent = NULL;
			free(iter);
			iter = st_par;
		}
	}
}
