






































/*
#include<stdio.h>
#define max 5

int queue[max];
int f=-1, r=-1;

void enqueue(int val) {
    if ((f == 0 && r == max - 1) || (r == (f - 1) % (max - 1))) {
	printf("Queue is full.\n");
    } else {
	if (f == -1) {
	    f = r = 0;
	} else if (r == max - 1 && f != 0) {
	    r = 0;
	} else {
	    r++;
	}
	queue[r] = val;
    }
}

void display() {
 int i;

 if (r >= f) {
 for(i = f; i <= r; i++) {
  printf("%d \t ", queue[i]);
  }
 } else {
  for (i = 0; i <= r; i++) {
   printf("%d \t ", queue[i]);
  }
  for (i = f; i < max; i++) {
   printf("%d \t ", queue[i]);
  }
 }
}

int main() {
    int a, no;
    
    do {
	printf("\nEnter number to perform following operations:\n");
	printf(" 1.Enqueue \n 2.Display \n 3.Exit \n");
	scanf("%d", &no);
	switch (no) {
	    case 1:
			printf("\nEnter value to be inserted:\n");
			scanf("%d", &a);
			enqueue(a);
		break;

        case 2: 
            display();
        	break;

        case 3: 
            printf("Exit\n");
            break;

        default: 
            printf("Invalid value\n");
            break;
        }
    } while (no != 3);
    return 0;
}
*/
