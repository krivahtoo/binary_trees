#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r, count = 0;

	if (tree == NULL)
		return (0);
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		count++;

	return (l + r + count);
}
