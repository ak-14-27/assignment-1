#include <iostream>

// Assuming Singly Linked List Node struct (Node from previous questions)
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to check if a linked list is circular
bool isCircular(Node* head) {
    if (head == nullptr) {
        return false; // An empty list is not circular
    }

    Node* slow = head;
    Node* fast = head;
    
    // Move slow by 1 and fast by 2
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        
        // If they meet, a cycle exists (it is circular)
        if (slow == fast) {
            return true;
        }
    }
    
    // If fast reaches NULL, there is no cycle (it's a linear list)
    return false;
}

// Example Usage (assuming Node struct is defined):
/*
int main() {
    // Example 1: Circular List (2 -> 4 -> 6 -> 7 -> 5 -> back to 4)
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(7);
    Node* five = new Node(5);
    head->next->next->next->next = five;
    
    // Create cycle: 5 points back to 4
    five->next = head->next; 

    // Output: True
    cout << "Is Circular: " << (isCircular(head) ? "True" : "False") << endl; 
    
    // Clean up memory is complex for circular lists, omitted for simple testing
    return 0;
}
*/
