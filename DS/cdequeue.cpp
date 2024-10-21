






































/*
#include <stdio.h>
#define max 5

int queue[max] = {10, 20, 30, 40, 50};
int f = 0, r = 4;

int dequeue() {
    int val = -1;
    if (f == -1) {
        printf("Queue is empty.\n");
    } else {
        val = queue[f];
        if (f == r) {
            f = r = -1;
        } else if (f == max - 1) {
            f = 0;
        } else {
            f++;
        }
        printf("Dequeued element is %d\n", val);
    }
    return val;
}

void display() {
    int i;
    if (f == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements are: \n");
    if (r >= f) {
        for (i = f; i <= r; i++) {
            printf("%d\t", queue[i]);
        }
    } else {
        for (i = f; i < max; i++) {
            printf("%d\t", queue[i]);
        }
        for (i = 0; i <= r; i++) {
            printf("%d\t", queue[i]);
        }
    }
    printf("\n");
}

int main() {
    int no;

    do {
        printf("\nEnter number to perform the following operations:\n");
        printf("1. Dequeue\n");
        printf("2. Display\n");
		printf("3. Exit\n");
        scanf("%d", &no);

        switch (no) {
            case 1:
                dequeue();
                break;

			case 2:
				display();
				break;
				
            case 3:
                printf("Exit\n");
                break;

            default:
                printf("Invalid option\n");
                break;
        }
    } while (no != 2);

    return 0;
}
*/
