#include <iostream>
using namespace std;

struct Node {
    int coeff, power;
    Node* next;
    Node(int c, int p) : coeff(c), power(p), next(NULL) {}
};

void insertNode(Node** head, int coeff, int power) {
    Node* newNode = new Node(coeff, power);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

Node* addPolynomials(Node* poly1, Node* poly2) {
    Node* result = NULL;
    while (poly1 || poly2) {
        int coeff = 0, power = 0;
        if (poly1 && poly2 && poly1->power == poly2->power) {
            coeff = poly1->coeff + poly2->coeff;
            power = poly1->power;
            poly1 = poly1->next;
            poly2 = poly2->next;
        } else if (poly1 && (!poly2 || poly1->power > poly2->power)) {
            coeff = poly1->coeff;
            power = poly1->power;
            poly1 = poly1->next;
        } else {
            coeff = poly2->coeff;
            power = poly2->power;
            poly2 = poly2->next;
        }
        insertNode(&result, coeff, power);
    }
    return result;
}

void printPolynomial(Node* head) {
    while (head) {
        if (head != head->next) cout << (head->coeff > 0 && head != head ? " + " : "");
        cout << head->coeff << (head->power != 0 ? "x^" : "") << (head->power != 0 ? to_string(head->power) : "");
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* poly1 = NULL;
    Node* poly2 = NULL;

    insertNode(&poly1, 3, 2);
    insertNode(&poly1, 2, 1);
    insertNode(&poly1, 1, 0);

    insertNode(&poly2, 2, 2);
    insertNode(&poly2, -1, 1);
    insertNode(&poly2, -3, 0);

    cout << "Polynomial 1: ";
    printPolynomial(poly1);

    cout << "Polynomial 2: ";
    printPolynomial(poly2);

    Node* result = addPolynomials(poly1, poly2);

    cout << "Result: ";
    printPolynomial(result);

    return 0;
}
