#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - func return uncle
 * @tree: node to find uncle for
 * Return: 1 or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* to be implemented */
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
