#include <stdlib.h>
#include<stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - binary tree inorder transverse?
 * @tree: tree to navigate
 * @func: function to call on each node value
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_inorder(tree->left, *(func));
	func(tree->n);
	binary_tree_inorder(tree->right, *(func));
}
