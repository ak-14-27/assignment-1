#include <iostream>
// Include Node struct from Q1 if running separately

// Function to find the middle element
int findMiddle(Node* head) {
    if (head == nullptr) {
        throw runtime_error("List is empty. Cannot find middle.");
    }
    
    Node* slow = head;
    Node* fast = head;
    
    // Move fast two steps and slow one step
    // The loop condition handles both even and odd length lists.
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // When the loop terminates, slow is at the middle node
    return slow->data;
}

// Example Usage (assuming Node struct is defined):
/*
int main() {
    // Input: 1 -> 2 -> 3 -> 4 -> 5 (Middle: 3)
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3); // Middle node
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Input: 1->2->3->4->5" << endl;
    cout << "Output: " << findMiddle(head) << endl; // Output: 3

    // Clean up memory is omitted for brevity in simple main function
    return 0;
}
*/
