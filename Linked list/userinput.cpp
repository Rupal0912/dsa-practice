#include <iostream>
using namespace std;

// Node class to represent each element in the linked list
class Node {
public:
    int data;      // Data part of the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// LinkedList class to manage the operations of the list
class LinkedList {
private:
    Node* head;   // Pointer to the first node of the list

public:
    // Constructor to initialize an empty list
    LinkedList() {
        head = nullptr;
    }

    // Function to add a new node at the end of the list
    void append(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;  // If list is empty, make new node the head
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;  // Traverse to the end of the list
            }
            temp->next = newNode;   // Add new node at the end
        }
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        if (temp == nullptr) {
            cout << "The list is empty!" << endl;
            return;
        }
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free the memory used by the list
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;  // Create an instance of LinkedList
    int n, val;

    cout << "How many elements do you want to add to the list? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> val;
        list.append(val);  // Append user input to the linked list
    }

    cout << "Linked List: ";
    list.display();  // Display the linked list

    return 0;
}
