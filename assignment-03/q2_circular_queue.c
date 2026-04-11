#include <stdio.h>
#define MAX 50

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int val;
    if((rear+1)%MAX == front) {
        printf("Queue Full!\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &val);
    if(front == -1)
        front = 0;
    rear = (rear+1)%MAX;
    queue[rear] = val;
    printf("%d inserted\n", val);
}

void dequeue() {
    if(front == -1) {
        printf("Queue Empty!\n");
        return;
    }
    printf("Deleted: %d\n", queue[front]);
    if(front == rear) {
        front = rear = -1;
    } else {
        front = (front+1)%MAX;
    }
}

void display() {
    int i;
    if(front == -1) {
        printf("Queue Empty!\n");
        return;
    }
    printf("Queue: ");
    i = front;
    while(1) {
        printf("%d ", queue[i]);
        if(i == rear) break;
        i = (i+1)%MAX;
    }
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid!\n");
        }
    }
}
