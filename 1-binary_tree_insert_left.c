#include <stdlib.h>
#include<stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary tree buolder?
 *
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to a new node of type binary_tree_t, or NULL
 * on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *old;

	old = malloc(sizeof(binary_tree_t));
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		old = (parent->left);
		old->parent = node;
		node->left = old;
		parent->left = node;
	}
	return (node);
}
