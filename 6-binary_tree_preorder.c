#include "binary_trees.h"

/**
 * binary_tree_preorder - a fun to preorder a tree
 * @tree: tree of the nodes
 * @func: pointer to fun to be executed
 * Return: pointer to node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
