






































/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to delete a node at a specific position
void deleteAtPosition(struct Node** head_ref, int position) {
    if (*head_ref == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = *head_ref;

    if (position == 0) {  // Delete the head node
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Traverse to the node just before the target node
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range\n");
        return;
    }

    struct Node* node_to_delete = temp->next;
    temp->next = node_to_delete->next;
    free(node_to_delete);
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
    // Creating a sample linked list for demonstration
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;

    printf("Original list: ");
    printList(head);

    deleteAtPosition(&head, 1);  // Deleting node at position 1 (second node)
    printf("After deletion at position 1: ");
    printList(head);

    return 0;
}
*/
