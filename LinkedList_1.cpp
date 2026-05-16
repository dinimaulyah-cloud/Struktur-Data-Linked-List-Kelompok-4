#include <iostream>
using namespace std;

// a linked list node
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

// checks whether key is present in linked list
bool searchKey(Node* head, int key) {

    // initialize curr with the head of linked list
    Node* curr = head;

    // iterate over all the nodes
    while (curr != NULL) {
        // If the current node's value is equal to key,
        // return true
        if (curr->data == key)
            return true;

        // move to the next node
        curr = curr->next;
    }

    // if there is no node with value as key, return false
    return false;
}

int main() {

    // create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

  	// key to search in the linked list
  	int key = 5;
  
    if (searchKey(head, key))
        cout << "true";
    else
        cout << "false";

    return 0;
}