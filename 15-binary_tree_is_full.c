#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, return 0.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	/** if tree is NULL, it is not full*/
	if (tree == NULL)
	return (0);

	/** if the node is a leaf, it's full*/
	if (tree->left == NULL && tree->right == NULL)
	return (1);

	/** if the node has two children, check both subtrees*/
	if (tree->left != NULL && tree->right != NULL)
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/** if the node has one child it is not full*/
	return (0);
}
