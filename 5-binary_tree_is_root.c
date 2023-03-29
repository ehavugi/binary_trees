#include <stdlib.h>
#include<stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - binary tree buolder?
 *
 * @node: test node
 * Return: 1 if true otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{

	if (node != NULL)
	{
		if (node->parent != NULL)
			return (0);
		else
			return (1);
	}
	return (0);
}
