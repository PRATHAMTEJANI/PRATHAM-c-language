#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(char x) {
    if (top < MAX - 1) {
        stack[++top] = x;
    } else {
        printf("Stack overflow\n");
    }
}

// Function to pop an element from the stack
char pop() {
    if (top == -1) {
        return -1; // Return -1 if stack is empty
    } else {
        return stack[top--];
    }
}

// Function to determine the priority of operators
int priority(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return 0;
}

int main() {
    char exp[MAX];
    char *e, x;

    printf("Enter the expression: ");
    scanf("%s", exp);
    printf("\n");

    e = exp;

    while (*e != '\0') {
        if (isalnum(*e)) {
            printf("%c ", *e); // Print operands (variables or numbers)
        } else if (*e == '(') {
            push(*e); // Push '(' onto the stack
        } else if (*e == ')') {
            // Pop from the stack until '(' is found
            while ((x = pop()) != '(') {
                printf("%c ", x);
            }
        } else {
            // Pop operators from the stack with higher or equal priority
            while (top != -1 && priority(stack[top]) >= priority(*e)) {
                printf("%c ", pop());
            }
            push(*e); // Push the current operator onto the stack
        }
        e++;
    }

    // Pop all remaining operators from the stack
    while (top != -1) {
        printf("%c ", pop());
    }
    
    printf("\n"); // For better output formatting
    return 0;
}