#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a nodes as the left-child of another node
 * @parent: pointer to the node to insert the left child in the new node
 * @value: value to store in the new node.
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /**declaration needs to be here*/

	if (parent == NULL)
	{
		return (NULL);
	}

	/** allocate memory fo the new node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/** initialize new node*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/** if parent left child*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node; /** set new node as the left child*/

	return (new_node);
}
