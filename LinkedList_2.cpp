#include <iostream>

// Node structure definition for the Linked List
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Search function with O(N) time complexity and O(1) space complexity
bool searchKey(Node* head, int key) {
    Node* current = head;
    
    // Linear iteration, safe for up to 10^5 nodes to prevent stack overflow
    while (current != nullptr) {
        if (current->data == key) {
            return true; // Key found
        }
        current = current->next;
    }
    
    return false; // Key not found
}

// Helper function to insert a node at the end of the list
void insertEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    // Creating Linked List for Example 1: [1 -> 2 -> 3 -> 4 -> 5 -> NULL]
    Node* head = nullptr;
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 3);
    insertEnd(head, 4);
    insertEnd(head, 5);
    
    int key = 5;
    
    // Output the result (true if found, false if not found)
    if (searchKey(head, key)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}