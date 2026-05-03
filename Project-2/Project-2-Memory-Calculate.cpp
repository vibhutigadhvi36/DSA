#include <iostream>
#include <vector>
using namespace std;

template <class T>
class MemoryCalculate {
private:
    T id;
    string name;

public:
    MemoryCalculate(T i, string n) {
        id = i;
        name = n;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
    T getId() {
        return id;
    }
};

int main() {
    vector<MemoryCalculate<int>> students;

    int choice;

    do {
        cout << "Student Management System" << endl;
        cout << "1. Add Student"<< endl;
        cout << "2. Display All Students"<< endl;
        cout << "3. Remove Student by ID"<< endl;
        cout << "4. Search Student by ID"<< endl;
        cout << "5. Exit"<< endl;
        cout << "Enter your choice: "<< endl;
        cin >> choice;

        if (choice == 1) {
            int id;
            string name;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;

            students.push_back(MemoryCalculate<int>(id, name));
            cout << "Student added successfully.."<< endl;
        }

        else if (choice == 2) {
            if (students.empty()) {
                cout << "No students found.."<< endl;
            } else {
                cout << "Student List:"<< endl;
                for (int i = 0; i < students.size(); i++) {
                    students[i].display();
                }
            }
        }

        else if (choice == 3) {
            int searchId;
            cout << "Enter ID to remove: ";
            cin >> searchId;

            bool found = false;

            for (int i = 0; i < students.size(); i++) {
                if (students[i].getId() == searchId) {
                    students.erase(students.begin() + i);
                    cout << "Student removed successfully..!!"<< endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found.."<< endl;
            }
        }

        else if (choice == 4) {
            int searchId;
            cout << "Enter ID to search: ";
            cin >> searchId;

            bool found = false;

            for (int i = 0; i < students.size(); i++) {
                if (students[i].getId() == searchId) {
                    cout << "Student found:"<< endl;
                    students[i].display();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found.."<< endl;
            }
        }

    } while (choice != 5);

    cout << "Program ended....!!"<< endl;

    return 0;
} 