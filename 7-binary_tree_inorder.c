#include "binary_trees.h"

/**
 * binary_tree_inorder - a fun to inorder a tree
 * @tree: tree of the nodes
 * @func: pointer to fun to be executed
 * Return: pointer to node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
