#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right, *node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	right = parent->right;
	node->n = value;
	node->left = NULL;
	node->parent = parent;
	node->right = right;
	if (right)
		right->parent = node;
	parent->right = node;
	return (node);
}
