#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingNumbers(vector<int>&num){
    long long n = num.size();
    int xr = 0;

    for (int i = 0; i < n;i++){
        xr = xr ^ num[i];
        xr = xr ^ (i + 1);
    }

    int bitNo = 0;
    while(1){
        if((xr & (1<<bitNo))!=0){
            break;
        }
        bitNo++;
    }

    int zero=0;
    int one=0;

    for (int i = 0; i < n;i++){
        if((num[i] & (1<<bitNo))!=0){
            one = one ^ num[i];
        }
        else{
            zero = zero ^ num[i];
        }

        if(((i+1) & (1<<bitNo))!=0){
            one = one ^ (i + 1);
        }else{
            zero = zero ^ (i + 1);
        }
    }

    int count = 0;
    for (int i = 0; i < n;i++){
        if(num[i]==zero)
            count++;
    }

    if(count==2)
        return {zero, one};

    return {one, zero};
}

int main(){
    vector<int> num;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num.push_back(x);
    }
    vector<int> ans = findMissingNumbers(num);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}