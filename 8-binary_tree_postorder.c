#include "binary_trees.h"

/**
 * binary_tree_postorder - a fun to postorder a tree
 * @tree: tree of the nodes
 * @func: pointer to fun to be executed
 * Return: pointer to node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
