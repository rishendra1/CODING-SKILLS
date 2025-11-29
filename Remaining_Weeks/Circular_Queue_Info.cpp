// CIRCULAR QUEUE
// Overcomes the wastage of space in a normal queue.

// rear = (rear + 1) % MAX
// front = (front + 1) % MAX

// Full condition:
// (rear + 1) % MAX == front

// Empty condition:
// front == -1

// Used in:
// - CPU scheduling (round robin)
// - Buffer management
// - Real-time systems
