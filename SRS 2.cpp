#include <iostream>
using namespace std;

struct node {
    int data1;
    struct node* next_link;
    struct node* prev_link;
};

int main()
{
    struct node ob1; // Node1

    // Initialization
    ob1.next_link = NULL;
    ob1.prev_link = NULL;
     cout << "Enter Number : ";
    cin >>ob1.data1 ;
   
    struct node ob2; // Node2
    // Initialization
    ob2.next_link = NULL;
    ob2.prev_link = NULL;
    cout << "Enter Number : ";
    cin >>ob2.data1 ;

    struct node ob3; // Node3

    // Initialization
    ob3.next_link = NULL;
    ob3.prev_link = NULL;
    cout << "Enter Number : ";
    cin >>ob3.data1 ;
   

    // Linking ob1, ob2 and ob3
    ob1.next_link = &ob2;
    ob2.prev_link = &ob1;
    ob2.next_link = &ob3;
    ob3.prev_link = &ob2;

       // Accessing data members of  ob1,ob2,ob3 using ob1
    cout<<ob1.data1<<"\t";
    cout << ob1.next_link->data1<<"\t";
    cout << ob1.next_link->next_link->data1 << endl;

    // Accessing data members of  ob1,ob2,ob3 using ob2
     cout<<ob2.prev_link->data1<<"\t";
    cout << ob2.data1 <<"\t";
    cout << ob2.next_link->data1 << endl;

      // Accessing data members of  ob1,ob2,ob3 using ob3
     cout<<ob3.prev_link->prev_link->data1<<"\t";
    cout << ob3.prev_link->data1<<"\t";
    cout << ob3.data1 << endl;

    return 0;
}