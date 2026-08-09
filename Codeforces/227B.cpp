// url: https://codeforces.com/contest/227/problem/B
// Title: Effective Approach
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> memoV(n+1);
    vector<int> memoP(n+1);
    for (int i = 1; i <= n; i++){
        int temp; cin >> temp;
        memoV[temp] = i;
        memoP[temp] = n-i+1;
    }

    int m; cin >> m;
    long long int v = 0, p = 0;
    for (int i = 0; i < m; i++){
        int temp; cin >> temp;
        v += memoV[temp];
        p += memoP[temp];
    }

    cout << v << " " << p << "\n";
    
    
}