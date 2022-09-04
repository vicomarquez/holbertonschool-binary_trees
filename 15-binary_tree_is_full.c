#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is NULL, 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t node_left = 0;
	size_t node_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	node_left = binary_tree_height(tree->left);
	node_right = binary_tree_height(tree->right);
	return (node_left - node_right);
}
