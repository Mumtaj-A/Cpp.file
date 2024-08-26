#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
 {
  // Going through array sequencially
  for (int i = 0; i < n; i++)

    if (arr[i] == x)

      return i;

  return -1;

}

int main() 

{
 int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

  int arr[size],x;
  cout<<"Enter "<<size<<" Numbers: ";
  for(int i=0;i<size;i++)
  cin>>arr[i];

  cout<<"\nEnter a Number to Search: ";
    cin>>x;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = search(arr, n, x);

 if (result == -1)
{
 cout << "Element not found";
}
else
{
 cout << "Element found at index No : " << result;
}
return 0;
}