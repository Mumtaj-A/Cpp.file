#include <iostream>

using namespace std;



// Define the maximum degree for the polynomials

const int MAX_DEGREE = 100;



// Function to input a polynomial

void inputPolynomial(int poly[], int& degree) {

    cout << "Enter the degree of the polynomial: ";

    cin >> degree;

    for (int i = 0; i <= degree; i++) {

        cout << "Enter coefficient for x^" << i << ": ";

        cin >> poly[i];

    }

}



// Function to display a polynomial

void displayPolynomial(const int poly[], int degree) {

    for (int i = degree; i >= 0; i--) {

        if (poly[i] != 0) {

            if (i != degree && poly[i] > 0)

                cout << " + ";

            if (i == 0)

                cout << poly[i];

            else if (i == 1)

                cout << poly[i] << "x";

            else

                cout << poly[i] << "x^" << i;

        }

    }

    cout << endl;

}



// Function to add two polynomials

void addPolynomials(const int poly1[], const int poly2[], int result[], int degree1, int degree2) {

    int maxDegree = max(degree1, degree2);

    for (int i = 0; i <= maxDegree; i++) {

        result[i] = poly1[i] + poly2[i];

    }

}



int main() {

    int poly1[MAX_DEGREE + 1] = {0};

    int poly2[MAX_DEGREE + 1] = {0};

    int result[MAX_DEGREE + 1] = {0};

    int degree1, degree2;



    // Input the first polynomial

    cout << "Enter the first polynomial:\n";

    inputPolynomial(poly1, degree1);



    // Input the second polynomial

    cout << "Enter the second polynomial:\n";

    inputPolynomial(poly2, degree2);



    // Add the two polynomials

    addPolynomials(poly1, poly2, result, degree1, degree2);



    // Display the result

    int resultDegree = max(degree1, degree2);

    cout << "The sum of the polynomials is: ";

    displayPolynomial(result, resultDegree);



    return 0;


}