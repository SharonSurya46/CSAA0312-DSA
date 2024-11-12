#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void insertEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = createNode(new_data);
    struct Node* last = *head_ref;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
}
void printList(struct Node* node) {
    struct Node* last;
    printf("Traversal in forward direction: \n");
    while (node != NULL) {
        printf("%d ", node->data);
        last = node;
        node = node->next;
    }
    printf("\nTraversal in reverse direction: \n");
    while (last != NULL) {
        printf("%d ", last->data);
        last = last->prev;
    }
}
int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printList(head);

    return 0;
}

