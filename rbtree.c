#include <rbtree/rbtree.h>
#include <stddef.h>

void *rbtree_search(rbTree *tree, void *element);


void *rbtree_search(rbTree *tree, void *element) {
    int cmp;
    size_t current_elem_index = 0;
    size_t elem_size = tree->tree_elements.element_size;
    size_t num_elem = tree->getSize(tree);
    char *data_arr = tree->getArray(tree); // sizeof(char) == 1

    for (int i = 0; i < tree->depth && current_elem_index < num_elem; ++i) {
        cmp = tree->cmp(element, data_arr + current_elem_index * elem_size);
        if (cmp == 0) {
            return data_arr + current_elem_index * elem_size;
        }
        current_elem_index += 1 << (i + 1); // 
        if (cmp < 0) {
            --current_elem_index;
        }
    }
}