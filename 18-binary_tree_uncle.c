#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree.
 * @node: pointer to the node to find the uncle.
 *
 * Return: pointer to the uncle node, or NULL if node is NULL, parent is NULL,
 * or node has no uncle.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);

	/** the uncle is the sibling of the parent */
	if (node->parent == node->parent->parent->left)
	return (node->parent->parent->right);
	else
	return (node->parent->parent->left);
}
