// Q-2-Singly-Linkedlist....
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL; 
void insertAtBeginning(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    cout << val << " inserted at beginning." << endl;
}
void insertAtEnd(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << val << " inserted at end." << endl;
}
void deleteFromBeginning() {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
    } else {
        Node* temp = head;
        head = head->next;
        cout << temp->data << " deleted from beginning." << endl;
        delete temp; 
    }
}
void display() {
    if (head == NULL) {
        cout << "List is empty.." << endl;
    } else {
        Node* temp = head;
        cout << "List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}
int main() {
    int choice, val;
    
    do {
        cout << endl << "--- Menu ---" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Delete from Beginning" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                insertAtBeginning(val);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> val;
                insertAtEnd(val);
                break;
            case 3:
                deleteFromBeginning();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}