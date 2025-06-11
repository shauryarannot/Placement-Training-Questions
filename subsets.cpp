#include <bits/stdc++.h>
using namespace std;

vector<int> greedySubsetMaxSum(vector<int> &nums, int K)
{
    sort(nums.begin(), nums.end());
    vector<int> subset;
    int sum = 0;
    for (int num : nums)
    {
        if (sum + num <= K)
        {
            subset.push_back(num);
            sum += num;
        }
    }
    return subset;
}

int main()
{
    vector<int> nums = {3, 5, 2, 1, 7};
    int K = 10;
    vector<int> result = greedySubsetMaxSum(nums, K);
    for (int x : result)
        cout << x << " ";
    cout << endl;
    return 0;
}
