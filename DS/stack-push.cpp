






































/*
#include<stdio.h>
#define SIZE 5

int top=-1, array[SIZE], choice=0, i=0;

void push();
void show();

int main(){
  while(1){
	  printf("\n\nPush operations on the stack: ");
	  printf("\n1.PUSH \n2.SHOW");
	  printf("\n\nEnter the choice: ");
	  scanf("%d", &choice);
	
	  switch(choice){
	   case 1:
	    push();
	    break;
	   case 2:
	    show();
	    break;
	   default:
	    printf("Invalid choice");
	    break;
	  }
  }
  return 0;
}

void push(){
 int x;
 if(top == SIZE - 1){
  printf("overflow");
 }
 else{
  printf("Enter the element: ");
  scanf("%d", &x);
  top++;
  array[top] = x;
 }
}

void show(){
 if(top == -1){
  printf("Underflow: no element");
 }
 else{
  printf("Elements in Stack: ");
  for(i=top; i>=0; --i){
   printf("\n%d", array[i]);
  }
 }
}
*/
