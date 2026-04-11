#include <stdio.h>
#define MAX 50

int deque[MAX];
int front = -1, rear = -1;

void insertFront() {
    int val;
    if((front == 0 && rear == MAX-1) || (front == rear+1)) {
        printf("Deque Full!\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &val);
    if(front == -1) {
        front = rear = 0;
    } else if(front == 0) {
        front = MAX-1;
    } else {
        front--;
    }
    deque[front] = val;
    printf("%d inserted at front\n", val);
}

void insertRear() {
    int val;
    if((front == 0 && rear == MAX-1) || (front == rear+1)) {
        printf("Deque Full!\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &val);
    if(front == -1) {
        front = rear = 0;
    } else if(rear == MAX-1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = val;
    printf("%d inserted at rear\n", val);
}

void deleteFront() {
    if(front == -1) {
        printf("Deque Empty!\n");
        return;
    }
    printf("Deleted from front: %d\n", deque[front]);
    if(front == rear) {
        front = rear = -1;
    } else if(front == MAX-1) {
        front = 0;
    } else {
        front++;
    }
}

void deleteRear() {
    if(front == -1) {
        printf("Deque Empty!\n");
        return;
    }
    printf("Deleted from rear: %d\n", deque[rear]);
    if(front == rear) {
        front = rear = -1;
    } else if(rear == 0) {
        rear = MAX-1;
    } else {
        rear--;
    }
}

void display() {
    int i;
    if(front == -1) {
        printf("Deque Empty!\n");
        return;
    }
    printf("Deque: ");
    i = front;
    while(1) {
        printf("%d ", deque[i]);
        if(i == rear) break;
        i = (i+1)%MAX;
    }
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1.Insert Front 2.Insert Rear 3.Delete Front\n");
        printf("4.Delete Rear 5.Display 6.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: insertFront(); break;
            case 2: insertRear(); break;
            case 3: deleteFront(); break;
            case 4: deleteRear(); break;
            case 5: display(); break;
            case 6: return 0;
            default: printf("Invalid!\n");
        }
    }
}
