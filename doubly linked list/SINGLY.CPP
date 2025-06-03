#include<iostream>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a node at the end of the singly linked list
void insertAtEnd(node*& head, int val) {
    node* newNode = new node(val);
    if (head == NULL) {
        // If the list is empty, the newNode becomes the head
        head = newNode;
        return;
    }

    // Traverse to the end of the list
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // Insert the newNode at the end
    temp->next = newNode;
}

// Function to display the singly linked list
void display(node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL;  // Initial empty list

    int n, value;
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Insert nodes based on user input
    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        insertAtEnd(head, value);
    }

    // Display the list
    cout << "The created singly linked list is: ";
    display(head);

    return 0;
}
