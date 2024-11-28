# Queue Implementation Using Two Stacks in C

## Overview
This program implements a **queue using two stacks** in C. It supports the basic queue operations like `enqueue`, `dequeue`, `peek`, and `display`. The queue is simulated using two stacks, `stack1` and `stack2`. This method efficiently reverses the order of elements in the queue using stack operations.

---

## Features

1. **Queue Operations**:
   - **Enqueue**: Adds an element to the rear of the queue.
   - **Dequeue**: Removes an element from the front of the queue.
   - **Peek**: Retrieves the front element of the queue without removing it.
   - **Display**: Prints all elements in the queue.

2. **Stack-Based Implementation**:
   - Two stacks (`stack1` and `stack2`) are used to simulate the queue's behavior.
   - The elements are moved between the two stacks during `enqueue` and `dequeue` operations to maintain the queue order.

3. **Fixed Maximum Size**:
   - The queue is implemented with a maximum size (`MAX = 50`), which limits the number of elements that can be stored.

---

## Files

### `queue_using_two_stacks.c`
This file contains the source code for:
- `enqueue(int x)`: Adds an element to the queue.
- `dequeue()`: Removes an element from the queue.
- `peek()`: Retrieves the front element of the queue.
- `display()`: Displays the contents of the queue.

---

## Functions

### 1. `void enqueue(int x)`
- **Purpose**: Adds an element to the rear of the queue.
- **Parameters**:
  - `x`: The value to be added to the queue.
- **Logic**:
  - The element is pushed onto `stack1`, which represents the rear of the queue.

---

### 2. `void dequeue()`
- **Purpose**: Removes an element from the front of the queue.
- **Logic**:
  - If both stacks are empty, the queue is empty.
  - Elements are moved from `stack1` to `stack2` to reverse the order.
  - The element at the top of `stack2` (the front of the queue) is popped.
  - Elements are moved back from `stack2` to `stack1` to restore the original order.

---

### 3. `void display()`
- **Purpose**: Displays the current contents of the queue.
- **Logic**:
  - Iterates over `stack1` and prints the elements from front to rear.

---

### 4. `void peek()`
- **Purpose**: Displays the front element of the queue.
- **Logic**:
  - Prints the element at the top of `stack1`, which represents the front of the queue.

---

## Usage

1. **Compilation**: Compile the program using a C compiler:
   ```bash
   gcc -o queue_using_two_stacks queue_using_two_stacks.c
