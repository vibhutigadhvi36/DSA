// Q-1 Stack-implementation..
#include <iostream>
using namespace std;

#define SIZE 5
int stack[SIZE];
int top = -1;  

void push(int val) { 
    if (top >= SIZE - 1) {
        cout << "Stack Overflow! Cannot push." << endl;
    } else {
        top++;
        stack[top] = val;
        cout << val << " pushed successfully." << endl;
    }
}
void pop() {
    if (top < 0) {
        cout << "Stack Underflow! Cannot pop." << endl;
    } else {
        cout << stack[top] << " popped successfully." << endl;
        top--;
    }
}
void display() {
    if (top < 0) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    int choice, val;
    
    do {
    cout << "---- Menu ----" << endl; 
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Display" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice:- " << endl; 
    cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program!!.." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}  