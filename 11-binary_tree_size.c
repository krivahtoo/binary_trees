#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	lh = tree->left ? binary_tree_size(tree->left) : 0;
	rh = tree->right ? binary_tree_size(tree->right) : 0;

	return (1 + lh + rh);
}
