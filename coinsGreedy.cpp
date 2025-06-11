#include <bits/stdc++.h>
using namespace std;

int minCoins(int amount)
{
    vector<int> coins = {25, 10, 5, 1};
    int count = 0;

    for (int coin : coins)
    {
        while (amount >= coin)
        {
            amount -= coin;
            count++;
        }
    }
    return count;
}

int main()
{
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int result = minCoins(amount);
    cout << "Minimum number of coins needed: " << result << endl;

    return 0;
}
