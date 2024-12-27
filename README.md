# 🎉 **Array Queue Implementation in C++**

This repository contains an **Array-based Queue** implementation in C++. A queue follows the **FIFO (First In, First Out)** principle, where the first element inserted is the first one to be removed. This implementation uses a fixed-size array to hold the elements of the queue.

---

## 🌟 **Features**

- **addQueue**: Adds an element to the rear of the queue.
- **deleteQueue**: Removes the element from the front of the queue.
- **frontQueue**: Returns the element at the front of the queue without removing it.
- **rearQueue**: Returns the element at the rear of the queue.
- **isEmpty**: Checks if the queue is empty.
- **isFull**: Checks if the queue is full.
- **printQueue**: Displays all items in the queue.
- **getFront**: Retrieves the front item from the queue.

---

## 🔍 **Code Structure**

### **Queue Class - `arrayQueueType`**

The class `arrayQueueType` provides the following methods:
- **`addQueue(int Element)`**: Adds an element to the rear of the queue.
- **`deleteQueue()`**: Removes the element from the front of the queue.
- **`frontQueue()`**: Returns the front element of the queue.
- **`getFront(int &getFront)`**: Retrieves and displays the front element of the queue.
- **`rearQueue()`**: Returns the rear element of the queue.
- **`isEmpty()`**: Checks if the queue is empty.
- **`isFull()`**: Checks if the queue is full.
- **`printQueue()`**: Displays all the elements in the queue from front to rear.

---

## 📋 **Example Usage**

```cpp
#include <iostream>
using namespace std;

const int MAX_LENGTH = 100;

class arrayQueueType {
    int rear;
    int front;
    int length;
    int arr[MAX_LENGTH];

public:
    arrayQueueType() {
        front = 0;
        rear = MAX_LENGTH - 1;
        length = 0;
    }

    int isEmpty() {
        return length == 0;
    }

    int isFull() {
        return length == MAX_LENGTH;
    }

    void addQueue(int Element) {
        if (isFull()) {
            cout << "Queue is Full, you can't add anything.\n";
        } else {
            rear = (rear + 1) % MAX_LENGTH;
            arr[rear] = Element;
            length++;
        }
    }

    void deleteQueue() {
        if (isEmpty()) {
            cout << "Empty queue! Can't dequeue...\n";
        } else {
            front = (front + 1) % MAX_LENGTH;
            length--;
        }
    }

    int frontQueue() {
        return arr[front];
    }

    void getFront(int &getFront) {
        if (isEmpty()) {
            cout << "Empty queue!\n";
        } else {
            getFront = arr[front];
        }
    }

    int rearQueue() {
        if (isEmpty()) {
            cout << "Empty queue!\n";
            return -1;
        }
        return arr[rear];
    }

    void printQueue() {
        if (!isEmpty()) {
            for (size_t i = front; i != rear; i = (i + 1) % MAX_LENGTH) {
                cout << arr[i] << " ";
            }
            cout << arr[rear] << endl;
        } else {
            cout << "Empty queue\n";
        }
    }
};

int main() {
    arrayQueueType q1;
    q1.addQueue(10);
    q1.addQueue(20);
    q1.addQueue(30);
    q1.addQueue(40);
    q1.deleteQueue();
    q1.printQueue();  // Output: 20 30 40
    return 0;
}

🧑‍💻 Example Output
bash
Copy code
Queue is Full, you can't add anything.
Items in the queue: 20 30 40
