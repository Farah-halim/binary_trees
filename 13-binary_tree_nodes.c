#include "binary_trees.h"

/**
 * binary_tree_nodes - a fun to count the nodes with at least 1 child
 * @tree: a pointer to the root node of the tree to count
 * the number of nodes
 * Return: number of nodes with 1 child at least
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else
	{
		if (tree->left || tree->right)
			return (1 + binary_tree_nodes(tree->left) +
					binary_tree_nodes(tree->right));
		else
			return (0);
	}
}
