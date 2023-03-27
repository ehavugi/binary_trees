#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - binary tree buolder?
 *
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to a new node of type binary_tree_t
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	node->parent = parent;
	node->n = value;
	return (node);
}
