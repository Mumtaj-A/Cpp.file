#include <iostream>
using namespace std;
void add(int A[2][2],int B[2][2],int C[2][2]){
    for(int i=0;i<2;i++){  
        for(int j=0;j<2;j++){
            C[i][j]=A[i][j]+B[i][j];
}
    }}

void multiply(int A[2][2], int B[2][2],int C[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            C[i][j]=0;
            for(int k=0;k<2;k++){
                C[i][j]+=A[i][k]*B[k][j];
                }
                }
                }
}
void printA( int A[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<A[i][j]<<" ";
            }
            cout<<endl;
}
}
int main()
{
    int A[2][2]={{1,2},{3,4}};
    int B[2][2]={{5,6},{7,8}};
    int sum[2][2];
    int product[2][2];

    // calculate the sum
    add(A ,B,sum);
    cout<<"Sum of matrices :" <<endl;
    printA(sum);

// calculate the product
multiply(A ,B,product);
cout<<"Product of matrices :" <<endl;
printA(product);

    return 0;
}