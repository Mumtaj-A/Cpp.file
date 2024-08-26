#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
ifstream inputFile("input.txt");
    if (inputFile.is_open()) {
   string line;
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
        inputFile.close();
    } else {
        cerr << "Unable to open file." << endl;
    }

    return 0;
}