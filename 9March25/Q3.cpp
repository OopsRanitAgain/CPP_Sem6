#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    int empId;
    string name;
    int age;
    string department;
    double salary;
    string designation;

    void display() {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "Designation: " << designation << endl;
        cout << "---------------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    vector<Employee> employees(n); // Using vector instead of VLA

    for (int i = 0; i < n; i++) {
        cout << "Enter details of Employee " << i + 1 << ":\n";
        cout << "Enter Employee ID: ";
        cin >> employees[i].empId;
        cin.ignore();  // Clear newline left in buffer

        cout << "Enter Name: ";
        getline(cin, employees[i].name);

        cout << "Enter Age: ";
        cin >> employees[i].age;
        cin.ignore();

        cout << "Enter Department: ";
        getline(cin, employees[i].department);

        cout << "Enter Salary: ";
        cin >> employees[i].salary;
        cin.ignore();

        cout << "Enter Designation: ";
        getline(cin, employees[i].designation);

        cout << endl;
    }

    cout << "Displaying Employee Details:\n";
    cout << "---------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        employees[i].display();
    }
    return 0;
}
