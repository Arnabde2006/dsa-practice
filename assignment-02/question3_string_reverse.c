#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Function to push character onto stack
void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack[top] = ch;
}

// Function to pop character from stack
char pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return '\0';
    }
    char ch = stack[top];
    top--;
    return ch;
}

// Function to reverse a string using stack
void reverseString(char str[]) {
    int length = strlen(str);
    
    // Push all characters onto stack
    printf("\nPushing characters onto stack...\n");
    for (int i = 0; i < length; i++) {
        push(str[i]);
        printf("Pushed: %c\n", str[i]);
    }
    
    // Pop all characters from stack to reverse the string
    printf("\nPopping characters from stack...\n");
    for (int i = 0; i < length; i++) {
        str[i] = pop();
        printf("Popped: %c\n", str[i]);
    }
}

int main() {
    char str[MAX];
    
    printf("===== STRING REVERSAL USING STACK =====\n");
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("\nOriginal String: %s\n", str);
    
    reverseString(str);
    
    printf("\nReversed String: %s\n", str);
    
    return 0;
}
