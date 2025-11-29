#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = 0, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) return;
    queue[++rear] = x;
}

int dequeue() {
    if (front > rear) return -1;
    return queue[front++];
}

int peek() {
    if (front > rear) return -1;
    return queue[front];
}

void display() {
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    printf("%d\n", peek());
    return 0;
}
