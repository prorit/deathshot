






































/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#define max 5

char stack[max];
char S[max];
int top = -1;

void push(int a) {
    if(top == max-1) {
        printf("Stack is Full");
    } else {
        top = top + 1;
        stack[top] = a;
    }
}

int pop() {
    if(top == -1) {
        printf("Stack is Empty");
        return -1; // Return some default value
    } else {
        int val;
        val = stack[top];
        top = top - 1;
        return val;
    }
}

int evaluate(char S) {
    int num1, num2, num3;
    num2 = pop();
    num1 = pop();
    switch(S) {
        case '+': num3 = num1 + num2; break;
        case '-': num3 = num1 - num2; break;
        case '*': num3 = num1 * num2; break;
        case '/': num3 = num1 / num2; break;
    }
    push(num3);
    return num3;
}

int main() {
    printf("Enter the expression:");
    scanf("%s", S);
    
    int length = strlen(S);
    
    for(int i = 0; i < length; i++) {
        if(S[i] >= '0' && S[i] <= '9') {
            int n = S[i] - '0';
            push(n);
        } else {
            evaluate(S[i]);
        }
    }
    
    printf("RESULT:%d", pop());
    return 0;
}
*/
