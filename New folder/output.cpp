#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            // Modify the line (e.g., convert to uppercase)
            // For demonstration, let's convert to uppercase
            for (char& c : line) {
                c = std::toupper(c);
            }
            outputFile << line << std::endl;
        }
        inputFile.close();
        outputFile.close();
        std::cout << "Data has been written to output.txt after modification." << std::endl;
    } else {
        std::cerr << "Unable to open files." << std::endl;
    }

    return 0;
}