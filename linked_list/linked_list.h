/**
 * @file linked_list.h
 * @author Egor Orachev
 * @date 9/3/2022
 */

#ifndef LEARNING_C_LINKED_LIST_H
#define LEARNING_C_LINKED_LIST_H

#ifndef LIST_ELEMENT_T
#define LIST_ELEMENT_T int
#endif

typedef LIST_ELEMENT_T list_element_t;

typedef struct list_node {
    struct list_node *next;
    list_element_t element;
} list_node_t;

typedef struct list {
    list_node_t *head;
    list_node_t *tail;
    int size;
} list_t;


/**
 * Init list container with default values.
 * @param list List struct to init
 */
void list_init(list_t *list) {
}

/**
 * Destroys list and release all used resources.
 * @param list List struct to release.
 */
void list_destroy(list_t *list) {
}

/**
 * Appends element to the end of the list.
 * @param list List struct to append
 * @param element Element to add
 */
void list_append(list_t *list, list_element_t element) {
}

/**
 * Removes element from list preserving order of elements.
 * @param list List to remove element from
 * @param element_index Index of the element to remove
 */
void list_remove(list_t *list, int element_index) {
}

/**
 * Clears list removing all elements.
 * @param list List to clear.
 */
void list_clear(list_t *list) {
}

#endif//LEARNING_C_LINKED_LIST_H
