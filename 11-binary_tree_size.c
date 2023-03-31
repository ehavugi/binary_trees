#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - func return uncle
 * @tree: node to find uncle for
 * Return: 1 or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* to be implemented */
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 +
			binary_tree_size(tree->right));
}
