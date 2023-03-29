#include <stdlib.h>
#include<stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - binary tree buolder?
 *
 * @node: test node
 * Return: 1 if true otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node != NULL)
	{
		if ((node->right == NULL) && (node->left == NULL))
			return (1);
		else
			return (0);
	}
	return (0);
}
