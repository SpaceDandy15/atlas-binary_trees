#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: the number of nodes with at least 1 child. If tree is NULL, return 0.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	/** check if the current node has at least one child*/
	if (tree->left != NULL || tree->right != NULL)
	{
		/** count this node and recursively count in left and right subtrees*/
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}
	/** if the current node has no children, don't count it*/
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}

