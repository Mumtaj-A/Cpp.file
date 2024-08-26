#include <iostream>

using namespace std;

// Define the Employee structure

struct Employee {

    int id;

    char name[100];

    int age;

    double salary;

};

// Function to input employee details

void inputEmployeeDetails(Employee &emp) {

    cout << "Enter Employee ID: ";

    cin >> emp.id;

    cin.ignore(); // Clear the newline character from the buffer

    cout << "Enter Employee Name: ";

    cin.getline(emp.name, 100);

    cout << "Enter Employee Age: ";

    cin >> emp.age;

    cout << "Enter Employee Salary: ";

    cin >> emp.salary;
    cout<<endl;

}

// Function to display employee details

void displayEmployeeDetails(const Employee &emp) {

    cout << "Employee ID: " << emp.id << endl;

    cout << "Employee Name: " << emp.name << endl;

    cout << "Employee Age: " << emp.age << endl;

    cout << "Employee Salary: " << emp.salary  <<endl;

}

int main() 

{

     int NUM_EMPLOYEES ; // Change
cout<<"Enter the no of employees :";
cin>> NUM_EMPLOYEES;
    Employee employees[NUM_EMPLOYEES];

    // Input details for each employee

    for (int i = 0; i < NUM_EMPLOYEES; i++) {

        cout << "!!---Enter details for employee : " << i + 1 << "---!!" << endl;

        inputEmployeeDetails(employees[i]);

    }

    // Display details for each employee

    cout << "\nEmployee details:\n";

    for (int i = 0; i < NUM_EMPLOYEES; i++) {

        cout << "Employee " << i + 1 << ":" << endl;

        displayEmployeeDetails(employees[i]);

        cout << endl;

    }

    return 0;

}