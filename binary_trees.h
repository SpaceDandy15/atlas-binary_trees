#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - binary tree node
 *
 * @n: integer stored in the node
 * @parent: Pointer to the parent node
 * @left: pointer to the left child node
 * @right: pointer to the right child node
*/
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_trees_s bst_t;
typedef struct binary_trees_s avl_t;
typedef struct binary_trees_s heap_t;

void binary_tree_print(const binary_tree_t *); /**helper function*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif
