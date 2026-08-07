//https://codeforces.com/contest/621/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> diag1(2000, 0);
    vector<int> diag2(2000, 0);

    long long int ans = 0;
    for (int i = 0; i < n; i++){
        int a, b; cin >> a >> b;

        ans += diag1[a+b-1] + diag2[b-a+1000];
        diag1[a+b-1]++;
        diag2[b-a+1000]++;
    }

    cout << ans << "\n";
    
}