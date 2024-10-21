






































/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to delete a node from the beginning
void deleteAtBeginning(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = *head_ref;
    struct Node* last = *head_ref;

    // Find the last node
    while (last->next != *head_ref) {
        last = last->next;
    }

    if (*head_ref == (*head_ref)->next) { // Only one node in the list
        free(*head_ref);
        *head_ref = NULL;
        return;
    }

    *head_ref = temp->next;
    last->next = *head_ref;
    free(temp);
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

    deleteAtBeginning(&head);
    printf("After deletion at beginning: ");
    printList(head);

    return 0;
}
*/
