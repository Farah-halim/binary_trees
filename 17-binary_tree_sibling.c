#include "binary_trees.h"

/**
 * binary_tree_sibling - a fun to find the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node == node->parent->left)
	{
		if (!(node->parent->right))
			return (NULL);

		return (node->parent->right);
	}

	else
	{
		if (!(node->parent->left))
			return (NULL);

		return (node->parent->left);
	}
}
