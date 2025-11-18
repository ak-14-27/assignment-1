#include <iostream>

using namespace std;

// --- Node Structure for Circular Linked List ---
struct CNode {
    int data;
    CNode* next;

    CNode(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    CNode* tail; // Pointer to the last node

public:
    CircularLinkedList() : tail(nullptr) {}

    // Helper to check if list is empty
    bool isEmpty() const {
        return tail == nullptr;
    }

    // --- (a) Insertion at the beginning (As a first node) ---
    void insertAtBeginning(int data) {
        CNode* newNode = new CNode(data);
        if (isEmpty()) {
            tail = newNode;
            tail->next = tail; // Circular link
        } else {
            newNode->next = tail->next; // New node points to current head
            tail->next = newNode;       // Tail still points to the new head
        }
        cout << "Inserted " << data << " at the beginning (head)." << endl;
    }

    // --- (a) Insertion at the end (As a last node) ---
    void insertAtEnd(int data) {
        insertAtBeginning(data); // Reuses the logic
        tail = tail->next;       // The new node is now the head, so we move the tail to it
        cout << "Inserted " << data << " at the end (tail)." << endl;
    }

    // --- (a) Insertion after a specific node ---
    void insertAfter(int dataToInsert, int targetValue) {
        if (isEmpty()) {
            cout << "List is empty. Insertion failed." << endl;
            return;
        }

        CNode* current = tail->next; // Start at head
        do {
            if (current->data == targetValue) {
                CNode* newNode = new CNode(dataToInsert);
                newNode->next = current->next;
                current->next = newNode;
                
                // If we inserted after the tail, the new node becomes the new tail
                if (current == tail) {
                    tail = newNode;
                }
                cout << "Inserted " << dataToInsert << " after " << targetValue << "." << endl;
                return;
            }
            current = current->next;
        } while (current != tail->next);
        
        cout << "Node with value " << targetValue << " not found. Insertion failed." << endl;
    }

    // --- (b) Deletion of a specific node ---
    void deleteSpecificNode(int targetValue) {
        if (isEmpty()) {
            cout << "List is empty. Deletion failed." << endl;
            return;
        }

        CNode* head = tail->next;
        CNode* current = head;
        CNode* prev = tail;

        do {
            if (current->data == targetValue) {
                // Case 1: Only one node in the list
                if (current == head && current == tail) {
                    delete current;
                    tail = nullptr;
                    cout << "Deleted " << targetValue << " (last remaining node)." << endl;
                    return;
                }

                // Case 2: Node is the head
                if (current == head) {
                    tail->next = current->next;
                }
                // Case 3: Node is the tail
                else if (current == tail) {
                    prev->next = head;
                    tail = prev;
                }
                // Case 4: Node is in between
                else {
                    prev->next = current->next;
                }
                
                cout << "Deleted node with value " << targetValue << "." << endl;
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        } while (current != head);

        cout << "Node with value " << targetValue << " not found. Deletion failed." << endl;
    }

    // --- (c) Search for a node ---
    void searchNode(int targetValue) {
        if (isEmpty()) {
            cout << "List is empty. Search failed." << endl;
            return;
        }
        CNode* current = tail->next; // Start at head
        int position = 1;
        do {
            if (current->data == targetValue) {
                cout << "Node " << targetValue << " found at position " << position << "." << endl;
                return;
            }
            current = current->next;
            position++;
        } while (current != tail->next);
        
        cout << "Node " << targetValue << " not found." << endl;
    }

    // Display for Q2: Display all node values (including head at the end)
    void display() const {
        if (isEmpty()) {
            cout << "List is empty." << endl;
            return;
        }
        cout << "Circular Linked List: ";
        CNode* current = tail->next; // Start at head
        do {
            cout << current->data;
            if (current != tail) {
                cout << " -> ";
            }
            current = current->next;
        } while (current != tail->next);
        
        // As per Q2, repeat head at the end
        cout << " -> " << tail->next->data; 
        cout << endl;
    }
};
