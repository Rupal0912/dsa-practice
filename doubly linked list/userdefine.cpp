#include<iostream>
using namespace std;

class node {
public:
    int val;
    node* next;
    node* prev;

    node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(node*& head, int val) {
    node* newNode = new node(val);
    if (head == NULL) {
        // If list is empty, newNode becomes the head
        head = newNode;
        return;
    }

    // Traverse to the end of the list
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // Insert newNode at the end
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to display the list
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
    cout << "The created doubly linked list is: ";
    display(head);

    return 0;
}
