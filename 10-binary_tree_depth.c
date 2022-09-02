#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: if tree is NULL, 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth_count = binary_tree_depth(tree->parent);
		depth_count++;
		return (depth_count);
	}
	return (0);
}
