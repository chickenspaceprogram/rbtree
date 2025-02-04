/*
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#ifdef __cplusplus
extern "C" {
#endif
#include <arraylist/arraylist.h>
typedef struct rbtree rbTree;

struct rbtree {
    ArrayList tree_elements;
    int depth;
    size_t next_level_size;

    int (* const cmp)(const void *elem1, const void *elem2); // cancer
    int (*add)(rbTree *tree, void *element);
    void *(*search)(rbTree *tree, void *element);
    int (*remove)(rbTree *tree, void *element);
    size_t (*getSize)(rbTree *tree);
    void *(*getArray)(rbTree *tree);
};

rbTree newRbTree(size_t element_size);

#ifdef __cplusplus
}
#endif
