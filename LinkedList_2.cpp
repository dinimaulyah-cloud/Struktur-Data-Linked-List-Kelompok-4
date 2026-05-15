#include <iostream>
using namespace std;

// Linked List Node
class Node {
public:
    int data;
    Node* next;

    // constructor to initialize a new node with data
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// checks whether the key is present in linked list
bool searchKey(Node* head, int key) {
  
    // base case
    if (head == nullptr)
        return false;

    // if key is present in current node, return true
    if (head->data == key)
        return true;

    // recur for remaining list
    return searchKey(head->next, key);
}

int main() {
  
    // create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Key to search in the linked list
    int key = 5;
  
    if (searchKey(head, key))
        cout << "true";
    else
        cout << "false";

    return 0;
}