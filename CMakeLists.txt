cmake_minimum_required(VERSION 3.19)
project(learning_c C)

set(CMAKE_C_STANDARD 99)

add_executable(array array/array.test.c)
add_executable(dictionaries dictionaries/dict.test.c)
add_executable(linked_list linked_list/linked_list.test.c)
add_executable(priority_queue priority_queue/priority_queue.test.c)
add_executable(sorting sorting/sort.test.c)
add_executable(strings strings/strings.test.c)
