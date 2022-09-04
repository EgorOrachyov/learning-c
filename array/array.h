/**
 * @file array.h
 * @author Egor Orachev
 * @date 9/3/2022
 */

#ifndef LEARNING_C_ARRAY_H
#define LEARNING_C_ARRAY_H

#ifndef ARRAY_ELEMENT_T
#define ARRAY_ELEMENT_T int
#endif

typedef ARRAY_ELEMENT_T array_element_t;

typedef struct array {
    int size;
    int capacity;
    array_element_t *elements;
} array_t;


/**
 * Init array container with default values.
 * @param array Array struct to init
 */
void array_init(array_t *array) {
}

/**
 * Destroys array and release all used resources.
 * @param array Array struct to release.
 */
void array_destroy(array_t *array) {
}

/**
 * Appends element to the end of the array.
 * @param array Array struct to append
 * @param element Element to add
 */
void array_append(array_t *array, array_element_t element) {
}

/**
 * Inserts element at specified index into array, moving existing elements after index to the right.
 * @param array Array to insert element in.
 * @param element Element to insert.
 * @param index Index where to insert.
 */
void array_insert_at(array_t *array, array_element_t element, int index) {
}

/**
 * Removes element from array preserving order of elements.
 * @param array Array to remove element from
 * @param element_index Index of the element to remove
 */
void array_remove(array_t *array, int element_index) {
}

/**
 * Clears array removing all elements.
 * @param array Array to clear.
 */
void array_clear(array_t *array) {
}

/**
 * Reverses all elements in the array.
 * @param array Array to reverse elements in.
 */
void array_reverse(array_t *array) {
}

#endif//LEARNING_C_ARRAY_H
