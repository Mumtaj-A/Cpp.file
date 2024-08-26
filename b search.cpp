#include <bits/stdc++.h> 
using namespace std; 

int binarySearch(int arr[], int low, int high, int x) 
{ 
	// Base case: If the search space becomes empty, the 
	// element is not present in the array 
	if (high >= low) { 
		// Calculate the middle index to divide the search 
		// space in half 
		int mid = low + (high - low) / 2; 

		// If the middle element is equal to 'x', we have 
		// found the element, return its index 
		if (arr[mid] == x) 
			return mid; 

		// If the middle element is greater than 'x', search 
		// in the left half of the array 
		if (arr[mid] > x) 
			return binarySearch(arr, low, mid - 1, x); 

		// If the middle element is less than 'x', search in 
		// the right half of the array 
        if(arr[mid]<x)
		return binarySearch(arr, mid + 1, high, x); 
	} 

	// If the base case is reached, the element is not 
	// present in the array, return -1 
	return -1; 
} 

int main(void) 
{ 
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
	int arr[size],x; 
    cout << "Enter "<< size <<" Number: ";
    for(int i=0;i<size;i++)
    cin>> arr[i];

  cout<<"Enter a Number to Search: ";
    cin>>x;
	// Element to be searched 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int result = binarySearch(arr, 0, n - 1, x); 
	 if (result == -1)
{
 cout << "Element not Present";
}
else
{
 cout << "Element Present at index No : " << result;
}
return 0;
}
