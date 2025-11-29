// STACK
// A stack is a linear data structure that follows LIFO (Last In, First Out).

// Basic operations:
// 1. push(x)    -> insert an element on the top of the stack
// 2. pop()      -> remove the top element from the stack
// 3. peek()     -> return the top element without removing it
// 4. isEmpty()  -> checks if the stack is empty
// 5. isFull()   -> checks if the stack is full (array implementation)

// Stack representation (array):
// int stack[MAX];
// int top = -1;

// Conditions:
// Stack full   -> top == MAX - 1
// Stack empty  -> top == -1

// Push logic (concept):
// if not full, increment top and insert element

// Pop logic (concept):
// if not empty, return element at top and decrement top

// Applications of stack:
// - Expression evaluation (infix, postfix)
// - Function calls and recursion
// - Undo/Redo operations
// - Backtracking (mazes, DFS)
// - Memory management
