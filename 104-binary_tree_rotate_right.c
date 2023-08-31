#include "binary_trees.h"
/**
 * binary_tree_rotate_right - a fun to perform a right-rotation
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *temp1;

	if (!tree || !(tree->left))
		return (NULL);

	temp = tree;
	temp1 = tree->left;

	if (temp1->right)
	{
		tree->left = temp1->right;
		temp1->right->parent = tree;
	}
	else
	{
		tree->left = NULL;
	}

	temp1->parent = temp->parent;
	temp1->right = temp;
	temp->parent = temp1;

	return (temp1);
}
