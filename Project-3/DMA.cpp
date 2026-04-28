// Dynamic Memory Allocation.. 
#include <iostream>
using namespace std;

class LinkedList {

private:
    struct Node {
        int data;
        Node* next;
    };

    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insert_at_beginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        cout << "Inserted at beginning." << endl;
    }

    void append(int value) {
        Node* newNode = new Node;
        newNode->data = value;
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

        cout << "The Node is added now.." << endl;
    }
    
    void display() {
        if (head == NULL) {
            cout << "List is empty.." << endl;
            return;
        }

        Node* temp = head;
        cout << "Linked List: ";

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    void search(int key) {
        Node* temp = head;
        int found = 0;

        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Element found." << endl;
                found = 1;
                break;
            }
            temp = temp->next;
        }

        if (found == 0) {
            cout << "Element not found." << endl;
        }
    }

    void delete_node(int key) {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        if (temp->data == key) {
            head = temp->next;
            delete temp;
            cout << "Node deleted." << endl;
            return;
        }

        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Element not found." << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;

        cout << "Node deleted." << endl;
    }


    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
        cout << "List reversed." << endl;
    }
};

int main() {
    LinkedList list;
    int choice, value;

    do {
        cout << "Linked List Operations.." << endl; 
        cout << "1. Append" << endl; 
        cout << "2. Insert at Beginning" << endl; 
        cout << "3. Display" << endl; 
        cout << "4. Search" << endl; 
        cout << "5. Delete" << endl; 
        cout << "6. Reverse" << endl; 
        cout << "7. Exit" << endl;  
        cout << "Enter choice: " << endl; 
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value; 
            list.append(value);
            break;

        case 2:
            cout << "Enter the position here : ";
            cin >> value;
            list.insert_at_beginning(value);
            break;

        case 3:
            list.display();
            break;

        case 4:
            cout << "Enter a value to search: ";
            cin >> value;
            list.search(value); 
            break; 

        case 5:
            cout << "Enter value you wish to delete : ";
            cin >> value;
            list.delete_node(value);
            break;

        case 6:
            list.reverse();
            break;

        case 7:
            cout << "Program end's here..!! Thankyou so-much.. " << endl; ;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}