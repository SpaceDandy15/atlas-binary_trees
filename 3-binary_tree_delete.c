#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	/** delete the left subtree recursively*/
	binary_tree_delete(tree->left);
	/** same but for the right sub tree*/
	binary_tree_delete(tree->right);
	/** free current node*/
	free(tree);
}
