#include <iostream>

class CircularQueue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

  
    bool isFull() {
        return (front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1);
    }


    bool isEmpty() {
        return front == -1;
    }

   
    void enQueue(int value) {
        if (isFull()) {
            cout << "Circular Queue Overflow! Cannot enqueue " << value << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % MAX_SIZE; 
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }

   
    int deQueue() {
        if (isEmpty()) {
            cout << "Circular Queue Underflow! Cannot dequeue." << endl;
            return -1;
        }
        int data = arr[front];
        if (front == rear) {
           
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE; 
        }
        return data;
    }
    
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Circular Queue elements: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);
        cout << endl;
    }

  
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty. Peek failed." << endl;
            return -1;
        }
        return arr[front];
    }
};
