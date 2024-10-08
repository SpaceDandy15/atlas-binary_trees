#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree.
 * @node: pointer to the node to find the sibling.
 *
 * Return: pointer to the sibling node, or NULL if node is NULL,
 * parent is NULL, or node has no sibling.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	return (NULL);

	/** if node is the left child, return the right child, and vice versa*/
	if (node == node->parent->left)
	return (node->parent->right);
	else
	return (node->parent->left);
}
