// Q-3-Queue-Implementation..
#include <iostream>
using namespace std;

#define SIZE 5 
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int val) {
    if (rear == SIZE - 1) {
        cout << "Queue is Overflow! Cannot enqueue anymore.." << endl;
    } else {
        if (front == -1) {
            front = 0; 
        } 
        rear++;
        queue[rear] = val;
        cout << val << " enqueued successfully.." << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Underflow! Cannot dequeue anymore..!!" << endl;
    } else {
        cout << queue[front] << " dequeued successfully." << endl;
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    int choice, val;

    do {
        cout << endl << "- - -  Menu - - - " << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl; 
        cout << "Enter your choice: " << endl;
        cin >> choice; 

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> val;
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
} 