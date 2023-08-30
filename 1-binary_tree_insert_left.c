#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left, *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	left = parent->left;
	node->n = value;
	node->right = NULL;
	node->parent = parent;
	node->left = left;
	if (left)
		left->parent = node;
	parent->left = node;
	return (node);
}
