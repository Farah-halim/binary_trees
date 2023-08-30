#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor
 * of our binary tree.
 * @tree: a pointer to the root node
 *  Return: The balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (left_h - right_h);
}

/**
 * binary_tree_height - THIS FUCTION IS TO MEASURE 
 * THE HIGHT OF OUR BINARY TREE.
 * @tree: a pointer to the root node
 * Return: the height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h >= right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
