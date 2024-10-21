






































/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Stack implementation
char stack[MAX_SIZE];
int top = -1;

void push(char item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
    }
    stack[++top] = item;
}

char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int precedence(char oper) {
    if (oper == '+' || oper == '-')
        return 1;
    if (oper == '*' || oper == '/')
        return 2;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, j = 0;
    char ch, x;
    push('(');
    strcat(infix, ")");
    while (infix[i] != '\0') {
        ch = infix[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            postfix[j++] = ch;
        else if (ch == '(')
            push(ch);
        else if (ch == ')') {
            while ((x = pop()) != '(')
                postfix[j++] = x;
        } else if (isOperator(ch)) {
            while (precedence(stack[top]) >= precedence(ch))
                postfix[j++] = pop();
            push(ch);
        }
        i++;
    }
    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];
    printf("Enter infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
*/
