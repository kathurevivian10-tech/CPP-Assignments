#include <iostream>
#include <string>
using namespace std;

const int MAX = 20;

string certificateNo[MAX] = {
    "KCSE001", "KCSE002", "KCSE003", "KCSE004", "KCSE005"
};

string studentName[MAX] = {
    "Brian Mwangi", "Mary Wanjiku", "John Kamau",
    "Ann Njeri", "Peter Kariuki"
};

int examYear[MAX] = {2024, 2024, 2023, 2024, 2023};

string centre[MAX] = {
    "Embu High School", "Kangaru Girls", "Meru School",
    "Kibugu High School", "Kirimara High School"
};

string grade[MAX] = {"B+", "A-", "B", "A", "B+"};

int totalStudents = 5;

int main() {
    int choice;

    do {
        cout << "\n===== UNIVERSITY ADMISSION SYSTEM =====\n";
        cout << "1. Verify Certificate\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string number;
            bool found = false;

            cout << "\nEnter Certificate Number: ";
            cin >> number;

            for (int i = 0; i < totalStudents; i++) {
                if (certificateNo[i] == number) {
                    cout << "\n===== VERIFICATION RESULT =====\n";
                    cout << "Certificate Number: " << certificateNo[i] << endl;
                    cout << "Student Name: " << studentName[i] << endl;
                    cout << "Exam Year: " << examYear[i] << endl;
                    cout << "Centre: " << centre[i] << endl;
                    cout << "Grade: " << grade[i] << endl;
                    cout << "Status: GENUINE\n";
                    cout << "Student can proceed with admission.\n";

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\n===== VERIFICATION RESULT =====\n";
                cout << "Certificate Number: " << number << endl;
                cout << "Status: NOT GENUINE\n";
                cout << "Student cannot proceed with admission.\n";
            }
        }

    } while (choice != 2);

    cout << "\nUniversity Admission System Closed.\n";

    return 0;
}