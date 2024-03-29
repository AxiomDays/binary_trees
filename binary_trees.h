#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>



/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
void binary_tree_print(const binary_tree_t *);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_leaves(const binary_tree_t *tree);
void do_traverse(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_depth(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
void leaf(const binary_tree_t *node, size_t *leaf_no);
void leaf_(const binary_tree_t *node, size_t *leaf_no);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
void node_(const binary_tree_t *node, size_t *node_no);
int binary_tree_is_perfect(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
void height(const binary_tree_t *node, size_t *height_no, const binary_tree_t
*root);
size_t binary_tree_relative_depth(const binary_tree_t *tree, const binary_tree_t
*root);
int binary_tree_is_my_leaf(const binary_tree_t *node);
int binary_tree_is_perfect_leaf(const binary_tree_t *node);
size_t binary_tree_perfect_depth(const binary_tree_t *tree);
void perfect_(const binary_tree_t *node, size_t *to_perfect, size_t
*even_depth);
void full(const binary_tree_t *node, size_t *full_ptr);
size_t binary_tree_is_full(const binary_tree_t *tree);

#endif
