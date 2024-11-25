#include <iostream>
using namespace std;

// Print Array
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // printArray(arr, 5);

    int size;
    cout << "Enter the size of an arrray: ";
    cin >> size;

    int *arr = new int[size]; // Declare an array in heap memory 

    cout << "Enter the element of an array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    printArray(arr, size);

    return 0;
}