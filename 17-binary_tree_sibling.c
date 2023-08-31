#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to sibling node, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p = NULL;

	if (!node || !node->parent)
		return (NULL);
	p = node->parent;
	if (p->left == node)
		return (p->right);
	else
		return (p->left);
}
