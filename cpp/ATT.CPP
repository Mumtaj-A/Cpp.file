#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    string first_name;
    string last_name;
    int roll_no;
    string Class;
    string vill;
    float per;
};

void addStudent();
void studentRecord();
void searchStudent();
void updateDetails();
void deleteStudent();

int main() {
    int choice;
    while (choice != 6) {
	cout << "\t\t\t=====STUDENT MANAGEMENT SYSTEM=====\n\n";
	cout << "\t\t\t\t     1. Add Student\n";
	cout << "\t\t\t\t     2. Students Records\n";
	cout << "\t\t\t\t     3. Search Student\n";
	cout << "\t\t\t\t     4. Update Student Details\n";
	cout << "\t\t\t\t     5. Delete Student\n";
	cout << "\t\t\t\t     6. Exit\n";
	cout << "\t\t\t\t    _____________________\n";
	cout << "\t\t\t\t     ";
	cin >> choice;

	switch (choice) {
	    case 1:
		addStudent();
		break;
	    case 2:
		studentRecord();
		cout << "\t\t\t\t  Press any key to exit..... \n";
		cin.ignore();
		cin.get();
		break;
	    case 3:
		searchStudent();
		cout << "\n\t\t\t\t  Press any key to exit.......\n";
		cin.ignore();
		cin.get();
		break;
	    case 4:
		updateDetails();
		cout << "\n\t\t\t\t  Press any key to exit.......\n";
		cin.ignore();
		cin.get();
		break;
	    case 5:
		deleteStudent();
		cout << "\n\t\t\t\t  Press any key to exit.......\n";
		cin.ignore();
		cin.get();
		break;
	    case 6:
		cout << "\n\t\t\t\t  Thank you for using this software.\n\n";
		break;
	    default:
		cout << "\n\t\t\t\t  Enter a valid number\n\n";
		cout << "\t\t\t\t  Press any key to continue.......\n";
		cin.ignore();
		cin.get();
		break;
	}
    }
    return 0;
}

void addStudent() {
    char another;
    ofstream file;
    Student info;
    do {
	cout << "\t\t\t\t=======Add Students Info=======\n\n\n";
	file.open("information.txt", ios::app);
	cout << "\n\t\t\tEnter First Name     : ";
	cin >> info.first_name;
	cout << "\n\t\t\tEnter Last Name     : ";
	cin >> info.last_name;
	cout << "\n\t\t\tEnter Roll-No       : ";
	cin >> info.roll_no;
	cout << "\n\t\t\tEnter Class(course) : ";
	cin >> info.Class;
	cout << "\n\t\t\tEnter Address       : ";
	cin >> info.vill;
	cout << "\n\t\t\tEnter Percentage    : ";
	cin >> info.per;
	cout << "\n\t\t\t______________________________\n";

	if (!file) {
	    cerr << "Can't open file" << endl;
	} else {
	    cout << "\t\t\tRecord stored successfully\n";
	}

	file.write(reinterpret_cast<char*>(&info), sizeof(Student));
	file.close();

	cout << "\t\t\tYou want to add another record?(y/n) : ";
	cin >> another;

    } while (another == 'y' || another == 'Y');
}

void studentRecord() {
    ifstream file;
    Student info;
    file.open("information.txt");
    cout << "\t\t\t\t=======STUDENTS RECORD=======\n\n\n";

    if (!file) {
	cerr << "Can't open file\n";
	exit(0);
    } else {
	cout << "\t\t\t\tRECORDS :\n";
	cout << "\t\t\t\t___________\n\n";
    }

    while (file.read(reinterpret_cast<char*>(&info), sizeof(Student))) {
	cout << "\n\t\t\t\tStudent Name  : " << info.first_name << " " << info.last_name;
	cout << "\n\t\t\t\tRoll NO       : " << info.roll_no;
	cout << "\n\t\t\t\tClass         : " << info.Class;
	cout << "\n\t\t\t\tVillage/City  : " << info.vill;
	cout << "\n\t\t\t\tPercentage    : " << info.per << "%";
	cout << "\n\t\t\t\t______________________________\n";
    }
    file.close();
    cin.ignore();
    cin.get();
}

void searchStudent() {
    ifstream file;
    Student info;
    int roll_no;
    int found = 0;

    file.open("information.txt");
    cout << "\t\t\t\t=======SEARCH STUDENTS RECORD=======\n\n\n";
    cout << "\t\t\tEnter the roll no : ";
    cin >> roll_no;

    while (file.read(reinterpret_cast<char*>(&info), sizeof(Student))) {
	if (info.roll_no == roll_no) {
	    found = 1;
	    cout << "\n\t\t\t\tStudent Name : " << info.first_name << " " << info.last_name;
	    cout << "\n\t\t\t\tRoll NO       : " << info.roll_no;
	    cout << "\n\t\t\t\tClass         : " << info.Class;
	    cout << "\n\t\t\t\tAddress: "<< info.vill;
	    cout << "\n\t\t\t\tPercentage    : " << info.per << "%";
	    cout << "\n\t\t\t\t______________________________\n";
	}
    }

    if (!found) {
	cout << "\n\t\t\tRecord not found\n";
    }

    file.close();
    cin.ignore();
    cin.get();
}

void updateDetails() {
    ifstream file;
    ofstream tempFile;
    Student info;
    int roll_no, choice, found = 0;

    file.open("information.txt");

    if (!file) {
	cerr << "Can't open file\n";
	exit(0);
    } else {
	cout << "\t\t\t\tRECORDS :\n";
	cout << "\t\t\t\t___________\n\n";
    }

    cout << "\t\t\t\t=======UPDATE STUDENTS RECORD=======\n\n\n";
    cout << "\n enter the roll no:";
    cin >> roll_no;

    cout << "\n\n\n\t\t\t\t     1. student new first name\n";
    cout << "\t\t\t\t     2. student new last name\n";
    cout << "\t\t\t\t     3. student new roll no \n";
    cout << "\t\t\t\t     4. student new class(course)\n";
    cout << "\t\t\t\t     5. student new addresss\n";
    cout << "\t\t\t\t     6. percentage\n";
    cout << "\t\t\t\t    _____________________\n";
    cout << "\t\t\t\t     ";
    cin >> choice;

    switch (choice) {
	case 1:
	    cout << "\n\t\t\tEnter  new First Name     : ";
	    cin >> info.first_name;
	    break;
	case 2:
	    cout << "\n\t\t\tEnter new Last Name     : ";
	    cin >> info.last_name;
	    break;
	case 3:
	    cout << "\n\t\t\tEnter new Roll-No       : ";
	    cin >> info.roll_no;
	    break;
	case 4:
	    cout << "\n\t\t\tEnter new Class(course) : ";
	    cin >> info.Class;
	    break;
	case 5:
	    cout << "\n\t\t\tEnter new Address       : ";
	    cin >> info.vill;
	    break;
	case 6:
	    cout << "\n\t\t\tEnter new Percentage    : ";
	    cin >> info.per;
	    break;
    }

    tempFile.open("temp.txt");

    while (file.read(reinterpret_cast<char*>(&info), sizeof(Student))) {
	if (info.roll_no == roll_no) {
	    found = 1;
	    switch (choice) {
		case 1:
		    info.first_name = info.first_name;
		    break;
		case 2:
		    info.last_name = info.last_name;
		    break;
		case 3:
		    info.roll_no = info.roll_no;
		    break;
		case 4:
		    info.Class = info.Class;
		    break;
		case 5:
		    info.vill = info.vill;
		    break;
		case 6:
		    info.per = info.per;
		    break;
	    }
	    cout << "\t\t\tRecord Update successfully\n";
	}
	tempFile.write(reinterpret_cast<char*>(&info), sizeof(Student));
    }

    if (!found) {
	cout << "\n\t\t\tRecord not found\n";
    }

    file.close();
    tempFile.close();

    remove("information.txt");
    rename("temp.txt", "information.txt");

    cin.ignore();
    cin.get();
}

void deleteStudent() {
    ifstream file;
    ofstream tempFile;
    Student info;
    int roll_no, found = 0;

    cout << "\t\t\t\t=======DELETE STUDENTS RECORD=======\n\n\n";
    file.open("information.txt");
    tempFile.open("temp.txt");
    cout << "\t\t\t\tEnter the roll no : ";
    cin >> roll_no;

    if (!file) {
	cerr << "Can't open file\n";
	exit(0);
    }

    while (file.read(reinterpret_cast<char*>(&info), sizeof(Student))) {
	if (info.roll_no == roll_no) {
	    found = 1;
	} else {
	    tempFile.write(reinterpret_cast<char*>(&info), sizeof(Student));
	}
    }

    file.close();
    tempFile.close();

    if (!found) {
	cout << "\n\t\t\t\tRecord not found\n";
    }

    if (found) {
	remove("information.txt");
	rename("temp.txt", "information.txt");
	cout << "\n\t\t\t\tRecord deleted successfully\n";
    }

    cin.ignore();
    cin.get();
}