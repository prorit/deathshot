






































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
    struct Node* prev = NULL;

    // If deleting the head node (position 0)
    if (position == 0) {
        struct Node* last = *head_ref;
        while (last->next != *head_ref) {
            last = last->next;
        }
        
        if (*head_ref == (*head_ref)->next) { // Only one node in the list
            free(*head_ref);
            *head_ref = NULL;
        } else {
            *head_ref = temp->next;
            last->next = *head_ref;
            free(temp);
        }
        return;
    }

    // Traverse to the node just before the target node
    for (int i = 0; i < position - 1 && temp->next != *head_ref; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp->next == *head_ref) {
        printf("Position out of range\n");
        return;
    }

    struct Node* node_to_delete = temp->next;
    temp->next = node_to_delete->next;
    free(node_to_delete);
}

// Function to print the circular linked list
void printList(struct Node* head) {
    if (head == NULL) return;
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

int main() {
    struct Node* head = NULL;
    // Creating a sample circular linked list for demonstration
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
    node1->data = 10; node1->next = node2;
    node2->data = 20; node2->next = node3;
    node3->data = 30; node3->next = node1;
    head = node1;

    printf("Original list: ");
    printList(head);

    deleteAtPosition(&head, 1); // Deleting node at position 1
    printf("After deletion at position 1: ");
    printList(head);

    return 0;
}
*/
