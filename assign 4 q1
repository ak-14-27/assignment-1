#include <iostream>
#include <cstdlib> 

using namespace std;

#define MAX_SIZE 5

class SimpleQueue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    SimpleQueue() {
        front = -1; 
        rear = -1;  
    }

    
    void enQueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue " << value << endl;
            return;
        }
        if (isEmpty()) {
            front = 0; 
        }
        rear = (rear + 1); // Move rear
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }

   
    int deQueue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue." << endl;
            return -1; 
        }
        int data = arr[front];
        if (front == rear) {
           
            front = -1;
            rear = -1;
        } else {
            front = front + 1;
        }
        return data;
    }

   
    bool isEmpty() {
        return front == -1;
    }

   
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
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


int main() {
    SimpleQueue q;
  
    return 0;
}
