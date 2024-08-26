#include<iostream>
using namespace std;

struct student {
    int uid;
    string name;
    string branch;
};

int main() {
    student s1;

    cout << "Enter student's UID: ";
    cin >> s1.uid;

    cout << "Enter student's name: ";
    cin >> s1.name ;

    cout << "Enter student's branch: ";
    cin >> s1.branch;

    // Now you can use the values entered by the user
    cout << "Student's details: " << endl;
    cout << "UID: " << s1.uid << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;
    
     student s2;

    cout << "Enter student's UID: ";
    cin >> s2.uid;

    cout << "Enter student's name: ";
    cin >> s2.name ;

    cout << "Enter student's branch: ";
    cin >> s2.branch;

    // Now you can use the values entered by the user
    cout << "Student's details: " << endl;
    cout << "UID: " << s2.uid << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Branch: " << s2.branch << endl;

    return 0;
}