#include <stdio.h>
#include <stdlib.h>

// Struktur untuk merepresentasikan node dalam linked list
struct Node {
    int data;
    struct Node *next;
};

// Fungsi untuk mencetak linked list
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    // Mendefinisikan tiga node untuk linked list
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Mengalokasikan memori untuk tiga node
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Mengisi data dan pointer ke node kedua
    head->data = 1;
    head->next = second;

    // Mengisi data dan pointer ke node ketiga
    second->data = 2;
    second->next = third;

    // Mengisi data dan menetapkan NULL ke pointer node ketiga
    third->data = 3;
    third->next = NULL;

    // Mencetak linked list
    printf("Linked list: ");
    printList(head);

    // Membebaskan memori yang dialokasikan untuk setiap node
    free(head);
    free(second);
    free(third);

    return 0;
}
