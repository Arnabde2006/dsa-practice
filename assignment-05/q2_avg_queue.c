#include <stdio.h>
#define MAX 50

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int val;
    if(rear == MAX-1) {
        printf("Queue Full!\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &val);
    if(front == -1)
        front = 0;
    rear++;
    queue[rear] = val;
    printf("%d inserted\n", val);
}

void display() {
    if(front == -1 || front > rear) {
        printf("Queue Empty!\n");
        return;
    }
    printf("Queue: ");
    for(int i=front; i<=rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void calculateAverage() {
    int sum = 0, count = 0;
    float avg;
    
    if(front == -1 || front > rear) {
        printf("Queue Empty!\n");
        return;
    }
    
    for(int i=front; i<=rear; i++) {
        sum += queue[i];
        count++;
    }
    
    avg = (float)sum / count;
    printf("Average of elements: %.2f\n", avg);
}

int main() {
    int choice;
    while(1) {
        printf("\n1.Enqueue 2.Display 3.Calculate Average 4.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: enqueue(); break;
            case 2: display(); break;
            case 3: calculateAverage(); break;
            case 4: return 0;
            default: printf("Invalid!\n");
        }
    }
}
