#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height_ - func return uncle
 * @tree: node to find uncle for
 * Return: 1 or 0
 */
size_t binary_tree_height_(const binary_tree_t *tree)
{
	size_t lDepth;
	size_t rDepth;

	/* to be implemented */
	if (tree == NULL)
	{
		return (0);
	}
	lDepth = binary_tree_height_(tree->left);
	rDepth = binary_tree_height_(tree->right);
	/* Use the larger one */
	if (lDepth > rDepth)
		return (lDepth + 1);
	else
		return (rDepth + 1);
}

/**
 * binary_tree_height - return height of tree
 * @tree: input
 * Return: integer for height of tree: NULL or Tree without child heihgt ==0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_(tree) - 1);
}
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
/**
 * binary_tree_is_perfect - func return uncle
 * @tree: node to find uncle for
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t N = binary_tree_size(tree);
	size_t H = binary_tree_height(tree);
	size_t  index = 0;
	size_t value = 2;

	for (index = 0; index < H; index++)
	{
		value = value * 2;
	}
	value  = value - 1;
	if (value == N)
		return (1);
	return (0);
}
