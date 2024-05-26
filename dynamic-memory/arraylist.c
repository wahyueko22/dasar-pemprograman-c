#include <stdio.h>
#include <stdlib.h>

// constant macro
#define INITIAL_CAPACITY 10

struct ArrayList {
    int *array;
    int size;
    int capacity;
};

// Function to initialize the array list
void initialize(struct ArrayList *list) {
    list->array = (int *)malloc(INITIAL_CAPACITY * sizeof(int));
    if (list->array == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    list->size = 0;
    list->capacity = INITIAL_CAPACITY;
}

// Function to add an element to the end of the array list
void add(struct ArrayList *list, int element) {
    if (list->size >= list->capacity) {
        // If the array is full, resize it
        list->capacity *= 2;
        list->array = (int *)realloc(list->array, list->capacity * sizeof(int));
        if (list->array == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
    }
    list->array[list->size++] = element;
}

// Function to get the element at a specific index
int get(struct ArrayList *list, int index) {
    if (index < 0 || index >= list->size) {
        printf("Index out of bounds.\n");
        exit(1);
    }
    return list->array[index];
}

// Function to print all elements of the array list
void print(struct ArrayList *list) {
    printf("[");
    for (int i = 0; i < list->size; i++) {
        printf("%d", list->array[i]);
        if (i < list->size - 1)
            printf(", ");
    }
    printf("]\n");
}

// Function to free the memory allocated for the array list
void cleanup(struct ArrayList *list) {
    free(list->array);
}

int main() {
    struct ArrayList list;
    initialize(&list);

    // Adding elements to the array list
    add(&list, 10);
    add(&list, 20);
    add(&list, 30);

    // Printing the array list
    printf("Array list: ");
    print(&list);

    // Getting an element at a specific index
    printf("Element at index 1: %d\n", get(&list, 1));

    // Cleaning up the memory
    cleanup(&list);

    return 0;
}
