#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 *
 * Return: the number of leaves in the tree. If tree is NULL, return 0.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/** if the current node is a leaf, return 1*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/** recursively count the leaves in the left and right subtrees*/
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
