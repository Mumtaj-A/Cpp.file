#include <iostream>
using namespace std;

int main() {
    float numbers[5];
    float sum = 0.0;
    
    cout << "------Enter five numbers------ "<<endl;
    for (int i = 0; i < 5; i++) {
        cout<<"Enter the number";
        cin >> numbers[i];
        sum += numbers[i];
    }

    float average = sum / 5;
    cout << "The average is: " << average << endl;

    return 0;
}
