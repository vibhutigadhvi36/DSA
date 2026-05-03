#include <iostream>
using namespace std;
class StackBase {  
public:
    virtual void push(int) = 0;
    virtual void pop() = 0;
    virtual void top() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
};
class Stack : public StackBase {
private:
    int arr[5]; 
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }
    void push(int value) {
        if (topIndex == 4) {
            cout << "Stack is Full." << endl;
        } else {
            topIndex++;
            arr[topIndex] = value;
            cout << "Element pushed." << endl;
        }
    }
    void pop() {
        if (topIndex == -1) {
            cout << "Stack is Empty.." << endl;
        } else {
            cout << "Popped element: " << arr[topIndex] << endl;
            topIndex--;
        }
    }
    void top() {
        if (topIndex == -1) {
            cout << "Stack is Empty!" << endl;
        } else {
            cout << "Top element is: " << arr[topIndex] << endl;
        }
    }
    void isEmpty() {
        if (topIndex == -1) {
            cout << "Stack is Empty..!!" << endl;
        } else {
            cout << "Stack is not Empty.." << endl;
        }
    }
    void isFull() {
        if (topIndex == 4) {
            cout << "Stack is Full.." << endl;
        } else {
            cout << "Stack is not Full.." << endl;
        }
    }
};
int main() {
    StackBase* s;
    Stack obj;
    s = &obj;
    int choice, value;
    do {
        cout << "Stack Operations...." << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Check Empty" << endl;
        cout << "5. Check Full" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice; 

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            s->push(value);
            break;

        case 2:
            s->pop();
            break;

        case 3:
            s->top();
            break;

        case 4:
            s->isEmpty();
            break;

        case 5:
            s->isFull();
            break;

        case 6:
            cout << "Program has ended bye - bye.." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl; 
        }

    } while (choice != 6);

    return 0;
}