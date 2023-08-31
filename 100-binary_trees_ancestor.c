#include "binary_trees.h"

/**
 * binary_trees_ancestor - a fun to find lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	size_t depth_first, depth_second, i;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	if (depth_first < depth_second)
	{
		for (i = 0; i < depth_second - depth_first; i++)
			second = second->parent;
	}
	else if (depth_first > depth_second)
	{
		for (i = 0; i < depth_first - depth_second; i++)
			first = first->parent;
	}
	while ((first != second) && first && second)
	{
		first = first->parent;
		second = second->parent;
	}

	if (first == second)
		return ((binary_tree_t *)first);

	return (NULL);
}

/**
 * binary_tree_depth - Function gives the depth of specified node from root
 * @tree: node to check the depth
 * Return: 0 is it is the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || !tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
