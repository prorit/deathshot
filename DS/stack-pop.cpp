







































#include<stdio.h>
#define SIZE 5

int top=SIZE-1, array[SIZE] = {1,2,3,4,5}, choice=0, i=0;

void pop();
void show();

int main(){
  while(1){
	  printf("\n\nPOP operations on the stack: ");
	  printf("\n1.POP \n2.SHOW");
	  printf("\n\nEnter the choice: ");
	  scanf("%d", &choice);
	
	  switch(choice){
	   case 1:
	    pop();
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

void pop(){
	if(top==-1){
	  printf("Underflow: no element");
	}else{
		printf("Element Poped: ", array[top]);
		top--;
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

