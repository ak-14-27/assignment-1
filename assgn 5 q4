#include <iostream>
// Include Node struct from Q1 if running separately

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next_node = nullptr;
    
    // Traverse the list
    while (current != nullptr) {
        // 1. Store the next node
        next_node = current->next;
        
        // 2. Reverse the current node's pointer
        current->next = prev;
        
        // 3. Move pointers one step forward
        prev = current;
        current = next_node;
    }
    
    // When loop finishes, 'prev' is the new head of the reversed list
    return prev;
}

// Example Usage (assuming Node struct is defined):
/*
// Utility function to print list
void printList(Node* head) {
    Node* current = head;
    while(current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) cout << " -> ";
        current = current->next;
    }
    cout << " -> NULL" << endl;
}

int main() {
    // Input: 1 -> 2 -> 3 -> 4 -> NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Input: ";
    printList(head);

    head = reverseList(head);

    cout << "Output: ";
    printList(head);
    // Expected Output: 4 -> 3 -> 2 -> 1 -> NULL

    // Clean up memory
    Node* current = head;
    while(current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    return 0;
}
*/
