#include <stdlib.h>
#include<stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - binary tree buolder?
 *
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to a new node of type binary_tree_t, or NULL
 * on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *old;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	*node = *binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		old = (parent->right);
		old->parent = node;
		node->right = old;
		parent->right = node;
	}
	return (parent->right);
}
