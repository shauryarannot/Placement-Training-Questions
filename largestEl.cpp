#include <iostream>
using namespace std;

int *findLargest(int arr[], int size)
{
    int *largest = &arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *largest)
        {
            largest = &arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {4, 9, 2, 11, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *largest = findLargest(arr, size);
    cout << "Largest element: " << *largest << endl;
    return 0;
}
