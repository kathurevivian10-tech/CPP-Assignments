#include <iostream>
#include <string>
using namespace std;

struct Student {
    string regNo;
    string name;
    int marks;
};

Student students[20];
int count = 0;

// Add a student
void addStudent() {
    if (count >= 20) {
        cout << "Array is full. Cannot add more students.\n";
        return;
    }

    cout << "Enter Registration Number: ";
    cin >> students[count].regNo;

    cout << "Enter Name: ";
    cin >> students[count].name;

    cout << "Enter Marks: ";
    cin >> students[count].marks;

    count++;
    cout << "Student added successfully.\n";
}

// Delete a student
void deleteStudent() {
    string regNo;
    cout << "Enter Registration Number to delete: ";
    cin >> regNo;

    for (int i = 0; i < count; i++) {
        if (students[i].regNo == regNo) {

            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }

            count--;
            cout << "Student deleted successfully.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

// Update student's marks
void updateMarks() {
    string regNo;
    cout << "Enter Registration Number: ";
    cin >> regNo;

    for (int i = 0; i < count; i++) {
        if (students[i].regNo == regNo) {

            cout << "Enter new marks: ";
            cin >> students[i].marks;

            cout << "Marks updated successfully.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

// Search for a student
void searchStudent() {
    string regNo;
    cout << "Enter Registration Number to search: ";
    cin >> regNo;

    for (int i = 0; i < count; i++) {
        if (students[i].regNo == regNo) {

            cout << "\nStudent Found\n";
            cout << "Registration Number: " << students[i].regNo << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Marks: " << students[i].marks << endl;

            return;
        }
    }

    cout << "Student not found.\n";
}

// Display all students
void displayStudents() {
    if (count == 0) {
        cout << "No students available.\n";
        return;
    }

    cout << "\n--- All Students ---\n";

    for (int i = 0; i < count; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Registration Number: " << students[i].regNo << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Delete Student\n";
        cout << "3. Update Student Marks\n";
        cout << "4. Search Student\n";
        cout << "5. Display All Students\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                deleteStudent();
                break;

            case 3:
                updateMarks();
                break;

            case 4:
                searchStudent();
                break;

            case 5:
                displayStudents();
                break;

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}