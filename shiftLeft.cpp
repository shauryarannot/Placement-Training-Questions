#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> result(n);
    int index = n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            result[index] = arr[i];
            index--;
        }
    }

    while (index >= 0)
    {
        result[index] = 0;
        index--;
    }

    for (int i = 0; i < n; i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
