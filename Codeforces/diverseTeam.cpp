//https://codeforces.com/problemset/problem/988/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> v;
    vector<int> check(101, 0);
    int idx = 1;
    while(n > 0 && k > 0){
        int tmp; cin >> tmp;

        if(check[tmp] == 0){
            check[tmp] = 1;
            v.push_back(idx);
            k--;
        }
        idx++;
        n--;
    }

    if(k == 0){
        cout << "YES\n";
        for(auto x : v){
            cout << x << " ";
        }
    }else{
        cout << "NO";
    }

    cout << "\n";
    return 0;
}