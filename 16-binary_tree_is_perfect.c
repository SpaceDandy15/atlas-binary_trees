#include "binary_trees.h"

/**
 * binary_tree_height - measures the hiehgt of a binary tree.
 * @tree: pointer to the root node of the treee to measure the height.
 *
 * Return: height of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	return (0);
	
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: size of the tree (number of nodes). If tree is NULL, return 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;

	if (tree == NULL)
	return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	/** the expected size of a perfect binary tree of height h is 2^h - 1 */
	expected_size = (1 << height) - 1;

	return (size == expected_size);
}
