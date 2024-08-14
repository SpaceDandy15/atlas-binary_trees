#include "binary_trees.h"

/**
 * binary_tree_depth measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth.
 *
 * Return: the depth of the node. If tree is NULL, return 0.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	/** recursively calculate the depth by going up to the parent*/
	return (binary_tree_depth(tree->parent) + 1);
}
