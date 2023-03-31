#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves_ - func return uncle
 * @tree: node to find uncle for
 * Return: 1 or 0
 */
size_t binary_tree_leaves_(const binary_tree_t *tree)
{
	/* to be implemented */
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves_(tree->left) +
		binary_tree_leaves_(tree->right));
}

/**
 * binary_tree_size_ - func return uncle
 * @tree: node to find uncle for
 * Return: 1 or 0
 */
size_t binary_tree_size_(const binary_tree_t *tree)
{
	/* to be implemented */
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size_(tree->left) + 1 +
			binary_tree_size_(tree->right));
}
/**
 * binary_tree_nodes - func return uncle
 * @tree: node to find uncle for
 * Return: 1 or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* to be implemented */
	return (binary_tree_size_(tree) - binary_tree_leaves_(tree));
}
