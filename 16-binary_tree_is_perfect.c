#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is NULL, 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	if (left == right)
		return (1);
	return (0);

	if (binary_tree_is_full(tree))
		return (1);
	return (0);

}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is NULL, 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: if tree is NULL, 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
