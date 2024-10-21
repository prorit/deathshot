






































/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at a specific position
void insertAtPosition(struct Node** head_ref, int new_data, int position) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    
    if (position == 0) {  // Insert at the beginning
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    struct Node* temp = *head_ref;
    for (int i = 0; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    insertAtPosition(&head, 10, 0); // Insert at beginning
    insertAtPosition(&head, 20, 1); // Insert at position 1
    insertAtPosition(&head, 30, 2); // Insert at position 2
    insertAtPosition(&head, 25, 2); // Insert at position 2 again
    printList(head);
    return 0;
}
*/

