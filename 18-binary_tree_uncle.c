#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - func return uncle
 * @node: node to find uncle for
 * Return: unclude node or null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_p = (node->parent);

	if (node == NULL)
	{
		return (NULL);
	}

	/* If father does not exist, there is no uncle */
	if (grand_p != NULL)
		grand_p = grand_p->parent;
	else
		return (NULL);

	/* If grand pa doesnot exist, there is no uncle */
	if (grand_p == NULL)
	{
		return (NULL);
	}
	/*if child of grandpa is not father, he is an uncle*/
	if (grand_p->right != node->parent)
	{
		return (grand_p->right);
	}
	else
	{
		return (grand_p->left);
	}
}
