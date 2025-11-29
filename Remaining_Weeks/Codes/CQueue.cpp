#include <stdio.h>
#define MAX 5

int cq[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % MAX == front) return;
    if (front == -1) front = rear = 0;
    else rear = (rear + 1) % MAX;
    cq[rear] = x;
}

int dequeue() {
    if (front == -1) return -1;
    int val = cq[front];
    if (front == rear) front = rear = -1;
    else front = (front + 1) % MAX;
    return val;
}

int peek() {
    if (front == -1) return -1;
    return cq[front];
}

void display() {
    if (front == -1) {
        printf("\n");
        return;
    }
    int i = front;
    while (1) {
        printf("%d ", cq[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    display();
    enqueue(50);
    display();
    printf("%d\n", peek());
    return 0;
}
