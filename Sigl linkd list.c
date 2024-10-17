// C program to implement a single linked list
#include <stdio.h>
#include <stdlib.h>
// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};
// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
// Function to insert a node at the beginning of the list
void push(struct Node** head_ref, int new_data) {
    // Allocate memory for the new node
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    // Put in the data
    new_node->data = new_data; 
    // Make next of new node as head
    new_node->next = (*head_ref);  
    // Move the head to point to the new node
    (*head_ref) = new_node;
}
int main() {
    // Start with the empty list
    struct Node* head = NULL;
    // Insert elements into the list
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    // Print the linked list
    printf("Linked list: ");
    printList(head);
    return 0;
}

