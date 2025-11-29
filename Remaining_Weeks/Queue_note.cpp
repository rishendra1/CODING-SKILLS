// QUEUE
// A queue is a linear data structure that follows FIFO (First In, First Out).

// Basic operations:
// 1. enqueue(x) -> insert element at the rear end
// 2. dequeue()  -> remove element from the front end
// 3. peek()     -> return front element without removing it
// 4. isEmpty()  -> checks if queue is empty
// 5. isFull()   -> checks if queue is full (array implementation)

// Queue representation (array):
// int queue[MAX];
// int front = -1;
// int rear = -1;

// Conditions:
// Queue empty -> front == -1
// Queue full  -> rear == MAX - 1

// Enqueue logic (concept):
// if queue not full, increment rear and insert element
// if front == -1, set front = 0

// Dequeue logic (concept):
// if queue not empty, remove element at front
// if front == rear, reset both to -1 (queue becomes empty)
// else increment front

// Diagram representation:
// front → [10] [20] [30] ← rear

// Applications of queue:
// - CPU scheduling
// - Printer spooling
// - Call center queues
// - BFS (Breadth First Search)
// - Traffic control systems
