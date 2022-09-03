/**
 * @file priority_queue.h
 * @author Egor Orachev
 * @date 9/3/2022
 */

#ifndef LEARNING_C_PRIORITY_QUEUE_H
#define LEARNING_C_PRIORITY_QUEUE_H

#ifndef QUEUE_ELEMENT_T
#define QUEUE_ELEMENT_T \
    struct {            \
        int priority;   \
        int value;      \
    }
#endif

typedef QUEUE_ELEMENT_T queue_element_t;

typedef struct priority_queue {
    int size;
    int capacity;
    queue_element_t *elements;
} priority_queue_t;


/**
 * Initialize priority queue with default value
 * @param queue Queue to init
 */
void priority_queue_init(priority_queue_t *queue) {
}

/**
 * Destroy queue and release all internal resources
 * @param queue Queue to destroy
 */
void priority_queue_destroy(priority_queue_t *queue) {
}

/**
 * Push element with priority and value into queue
 * @param queue Queue to pus into
 * @param element Element to push
 */
void priority_queue_push(priority_queue_t *queue, queue_element_t element) {
}

/**
 * Pop element from queue with highest priority
 * @param queue Queue to pop from
 * @param element Element pointer where to store popped value
 */
void priority_queue_pop(priority_queue_t *queue, queue_element_t *element) {
}

/**
 * Clear all elements from queue making it empty
 * @param queue Queue to clear
 */
void priority_queue_clear(priority_queue_t *queue) {
}

#endif//LEARNING_C_PRIORITY_QUEUE_H
