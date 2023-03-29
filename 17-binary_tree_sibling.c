#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - func return uncle
 * @node: node to find uncle for
 * Return: sibling node or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent_;

	/* if node is NULL return NULL, can't have a sibling */
	if (node == NULL)
	{
		return (NULL);
	}

	parent_ = node->parent;
	/* If parent does not exist, there is no sibling*/
	if (parent_ != NULL)
	{
		/*if child of parent is not this node, he is a sibling*/
		if (parent_->right != node)
		{
			return (parent_->right);
		}
		else
		{
			return (parent_->left);
		}
	}
	return (NULL);
}
