#include <iostream>
// Include Node struct and LinkedList class structure from Q1 if running separately

// Function to count occurrences of a key and delete all of them
int countAndDeleteAll(Node*& head, int key) {
    int count = 0;
    
    // 1. Handle deletion of the key from the head
    while (head != nullptr && head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        count++;
    }

    // 2. Traverse the rest of the list
    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->next->data == key) {
            // Delete the next node
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
            count++;
            // Note: current pointer does not move forward here, 
            // as current->next now points to a new node that might also be the key.
        } else {
            // Move forward only if the next node was NOT deleted
            current = current->next;
        }
    }
    
    return count;
}

// Example Usage (assuming Node struct is defined):
/*
int main() {
    // Input: 1 -> 2 -> 1 -> 3 -> 1, key: 1
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(1);

    cout << "Original List: 1 -> 2 -> 1 -> 3 -> 1" << endl;

    int key = 1;
    int count = countAndDeleteAll(head, key);

    cout << "Output: Count: " << count << ", Updated Linked List: ";
    Node* current = head;
    while(current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) cout << " -> ";
        current = current->next;
    }
    // Expected Output: 2 -> 3
    cout << endl;
    
    // Clean up memory
    current = head;
    while(current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    return 0;
}
*/
