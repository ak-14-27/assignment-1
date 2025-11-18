#include <iostream>
#include <stdexcept>

using namespace std;


struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};


class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() {
       
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

  
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << data << " at the beginning." << endl;
    }

 
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            cout << "Inserted " << data << " at the end." << endl;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        cout << "Inserted " << data << " at the end." << endl;
    }

  
    void insertAfter(int dataToInsert, int targetValue) {
        Node* current = head;
        while (current != nullptr && current->data != targetValue) {
            current = current->next;
        }
        
        if (current == nullptr) {
            cout << "Error: Node with value " << targetValue << " not found. Insertion failed." << endl;
            return;
        }
        
        Node* newNode = new Node(dataToInsert);
        newNode->next = current->next;
        current->next = newNode;
        cout << "Inserted " << dataToInsert << " after node " << targetValue << "." << endl;
    }

    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "Error: List is empty. Deletion failed." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        cout << "Deleted node with value " << temp->data << " from the beginning." << endl;
        delete temp;
    }

   
    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "Error: List is empty. Deletion failed." << endl;
            return;
        }
        if (head->next == nullptr) { 
            cout << "Deleted node with value " << head->data << " from the end." << endl;
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;
        
        while (current->next->next != nullptr) {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = nullptr;
        cout << "Deleted node with value " << temp->data << " from the end." << endl;
        delete temp;
    }

    
    void deleteSpecificNode(int targetValue) {
        if (head == nullptr) {
            cout << "Error: List is empty. Deletion failed." << endl;
            return;
        }

       
        if (head->data == targetValue) {
            Node* temp = head;
            head = head->next;
            cout << "Deleted node with value " << temp->data << "." << endl;
            delete temp;
            return;
        }

       
        Node* current = head;
        // Stop when the NEXT node has the target value
        while (current->next != nullptr && current->next->data != targetValue) {
            current = current->next;
        }

        if (current->next == nullptr) {
            cout << "Error: Node with value " << targetValue << " not found. Deletion failed." << endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        cout << "Deleted node with value " << temp->data << "." << endl;
        delete temp;
    }
    

    void searchNode(int targetValue) {
        if (head == nullptr) {
            cout << "List is empty. Search failed." << endl;
            return;
        }
        int position = 1;
        Node* current = head;
        while (current != nullptr) {
            if (current->data == targetValue) {
                cout << "Node with value " << targetValue << " found at position " << position << "." << endl;
                return;
            }
            current = current->next;
            position++;
        }
        cout << "Node with value " << targetValue << " not found in the list." << endl;
    }

   
    void display() const {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        cout << "Linked List: ";
        Node* current = head;
        while (current != nullptr) {
            cout << current->data;
            if (current->next != nullptr) {
                cout << " -> ";
            }
            current = current->next;
        }
        cout << endl;
    }

   
    Node* getHead() const {
        return head;
    }
};


void displayMenu() {
    cout << "\n--- Singly Linked List Operations ---" << endl;
    cout << "1. Insert at Beginning" << endl;
    cout << "2. Insert at End" << endl;
    cout << "3. Insert After Specific Value (e.g., insert 35 after 30)" << endl;
    cout << "4. Delete from Beginning" << endl;
    cout << "5. Delete from End" << endl;
    cout << "6. Delete Specific Node (by value)" << endl;
    cout << "7. Search for a Node" << endl;
    cout << "8. Display List" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter your choice: ";
}


int main() {
    LinkedList list;
    int choice, data, target;

    do {
        list.display(); 
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to insert at beginning: ";
                cin >> data;
                list.insertAtBeginning(data);
                break;
            case 2:
                cout << "Enter data to insert at end: ";
                cin >> data;
                list.insertAtEnd(data);
                break;
            case 3:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter target value to insert AFTER: ";
                cin >> target;
                list.insertAfter(data, target);
                break;
            case 4:
                list.deleteFromBeginning();
                break;
            case 5:
                list.deleteFromEnd();
                break;
            case 6:
                cout << "Enter value of node to delete: ";
                cin >> target;
                list.deleteSpecificNode(target);
                break;
            case 7:
                cout << "Enter value to search: ";
                cin >> target;
                list.searchNode(target);
                break;
            case 8:
               
                break;
            case 9:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}
