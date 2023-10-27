#include "binary_trees.h"

/**
* is_avl - checks if a binary tree is a valid AVL tree
* @tree: binary tree
* @min: value of min node
* @max: value of max node
* @height: height of the tree
* Return: 1 if it is AVL tree, 0 otherwise
*/
int is_avl(const binary_tree_t *tree, int min, int max, int *height)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	if (!is_avl(tree->left, min, tree->n - 1, &left_height))
		return (0);
	if (!is_avl(tree->right, tree->n + 1, max, &right_height))
		return (0);
	*height = 1 + (left_height > right_height ? left_height : right_height);
	return (abs(left_height - right_height) <= 1);
}

/**
 * binary_tree_is_avl - function that checks if a binary tree is a valid AVL
 * @tree: binary tree
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int height = 0;

	if (!tree)
		return (0);
	return (is_avl(tree, INT_MIN, INT_MAX, &height));
}
