






































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
    *head_ref = temp->next;
    free(temp);
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

    deleteAtBeginning(&head);
    printf("After deletion at beginning: ");
    printList(head);

    return 0;
}
*/
