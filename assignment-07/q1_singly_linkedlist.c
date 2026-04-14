#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void insertBeginning() {
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &tmp->data);
    
    if(start == NULL) {
        tmp->next = NULL;
    } else {
        tmp->next = start;
    }
    start = tmp;
    printf("Node inserted at beginning\n");
}

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
    printf("Node inserted at end\n");
}

void insertPosition() {
    struct node *tmp, *q;
    int pos, i;
    
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    
    printf("Enter position: ");
    scanf("%d", &pos);
    
    q = start;
    for(i=1; i<pos; i++) {
        q = q->next;
        if(q == NULL) {
            printf("Less nodes present\n");
            return;
        }
    }
    
    tmp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &tmp->data);
    tmp->next = q->next;
    q->next = tmp;
    printf("Node inserted at position %d\n", pos);
}

void deleteBeginning() {
    struct node *tmp;
    
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    
    tmp = start;
    start = start->next;
    printf("Deleted: %d\n", tmp->data);
    free(tmp);
}

void deleteEnd() {
    struct node *q, *tmp;
    
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    
    if(start->next == NULL) {
        printf("Deleted: %d\n", start->data);
        free(start);
        start = NULL;
        return;
    }
    
    q = start;
    while(q->next->next != NULL) {
        q = q->next;
    }
    tmp = q->next;
    q->next = NULL;
    printf("Deleted: %d\n", tmp->data);
    free(tmp);
}

void deletePosition() {
    struct node *p, *q;
    int pos, i;
    
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    
    if(pos == 1) {
        deleteBeginning();
        return;
    }
    
    p = start;
    for(i=1; i<pos-1; i++) {
        p = p->next;
        if(p == NULL) {
            printf("Less nodes present\n");
            return;
        }
    }
    
    q = p->next;
    if(q == NULL) {
        printf("Position not found\n");
        return;
    }
    p->next = q->next;
    printf("Deleted: %d\n", q->data);
    free(q);
}

void display() {
    struct node *q;
    
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    
    q = start;
    printf("\nLinked List: ");
    while(q != NULL) {
        printf("%d -> ", q->data);
        q = q->next;
    }
    printf("NULL\n");
}

void countNodes() {
    struct node *q;
    int count = 0;
    
    q = start;
    while(q != NULL) {
        count++;
        q = q->next;
    }
    printf("Total nodes: %d\n", count);
}

int main() {
    int choice;
    
    while(1) {
        printf("\n--- Singly Linked List Operations ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Delete at Position\n");
        printf("7. Display\n");
        printf("8. Count Nodes\n");
        printf("9. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: insertBeginning(); break;
            case 2: insertEnd(); break;
            case 3: insertPosition(); break;
            case 4: deleteBeginning(); break;
            case 5: deleteEnd(); break;
            case 6: deletePosition(); break;
            case 7: display(); break;
            case 8: countNodes(); break;
            case 9: return 0;
            default: printf("Invalid choice\n");
        }
    }
    
    return 0;
}
