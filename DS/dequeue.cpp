






































/*
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX] = {1, 2, 3, 4, 5};
int front = 0, rear = MAX - 1;

int isEmpty() {
    return (front == -1);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is Empty.\n");
    } else {
        int num = queue[front];
        printf("Deleted element: %d\n", num);
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty.\n");
    } else {
        printf("Queue:");
        for (int i = front; i <= rear; i++) {
            printf(" %d", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("1. DEQUEUE\n2. DISPLAY\n3. EXIT\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                dequeue();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("ERROR: Invalid choice.\n");
        }
    }
    return 0;
}
*/
