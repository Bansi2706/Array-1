// Write a Program to find the length of a 1D array.
// For example,
// Input:
// Enter array size: 5
// Enter array elements:
// a[0] = 3
// a[1] = 7
// a[2] = 1
// a[3] = 8
// a[4] = 6
// Output:
// Length of an Array: 5

#include <iostream>
using namespace std;

main(){

    int size;

    cout << "Enter array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The length of the array is: " << size << endl;
 
    return 0;

}