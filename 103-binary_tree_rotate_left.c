#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a fun to perform a left-rotation
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *temp1;

	if (!tree || !(tree->right))
		return (NULL);

	temp = tree;
	temp1 = tree->right;

	if (temp1->left)
	{
		tree->right = temp1->left;
		temp1->left->parent = tree;
	}
	else
	{
		tree->right = NULL;
	}

	temp1->parent = temp->parent;
	temp1->left = temp;
	temp->parent = temp1;

	return (temp1);
}
