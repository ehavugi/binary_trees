#include <stdlib.h>
#include<stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - binary tree delete
 *
 * @tree: parent node
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		free(tree);
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
