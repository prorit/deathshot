






































/*
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isFull() {
    return (rear == MAX - 1);
}

int isEmpty() {
    return (front == -1 || front > rear);
}

void enqueue(int num) {
    if (isFull()) {
        printf("Queue is Overflow.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = num;
        printf("Enqueued element: %d\n", queue[rear]);
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
    int choice, n;
    while (1) {
        printf("1. ENQUEUE\n2. DISPLAY\n3. EXIT\n");
        printf("Enter the choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element:");
                scanf("%d", &n);
                enqueue(n);
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
