#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    cout << "Sum of array elements is: " << sum << endl;

    return 0;
}
