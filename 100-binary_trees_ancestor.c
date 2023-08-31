#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: common ancestor, NULL otherwise
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first,
	const binary_tree_t *second
)
{
	const binary_tree_t *n1 = first, *n2 = second;

	if (!n1 || !n2)
		return (NULL);
	while (n1)
	{
		n2 = second;
		while (n2)
		{
			if (n2 == n1)
				return ((binary_tree_t *)n2);
			n2 = n2->parent;
		}
		n1 = n1->parent;
	}
	return (NULL);
}
