#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to meausre the size
 *
 * Return: The size of the tree (number of nodes). If tree
 * is NULL, return 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/** recursively calculate the size of the left and right subtrees*/
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
