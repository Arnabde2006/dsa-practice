#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void insertEnd() {
    struct node *tmp, *q;
    tmp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &tmp->data);
    tmp->next = NULL;
    
    if(start == NULL) {
        start = tmp;
    } else {
        q = start;
        while(q->next != NULL) {
            q = q->next;
        }
        q->next = tmp;
    }
}

void display() {
    struct node *q;
    
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    
    q = start;
    printf("Linked List: ");
    while(q != NULL) {
        printf("%d -> ", q->data);
        q = q->next;
    }
    printf("NULL\n");
}

void reverseList() {
    struct node *prev, *current, *next;
    
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    
    prev = NULL;
    current = start;
    
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    start = prev;
    printf("List reversed successfully\n");
}

int main() {
    int choice, n, i;
    
    printf("--- Create Singly Linked List ---\n");
    printf("How many nodes: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
        printf("Node %d: ", i+1);
        insertEnd();
    }
    
    printf("\n--- Before Reverse ---\n");
    display();
    
    reverseList();
    
    printf("\n--- After Reverse ---\n");
    display();
    
    return 0;
}
