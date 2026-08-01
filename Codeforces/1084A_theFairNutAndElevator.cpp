//https://codeforces.com/problemset/problem/1084/A
#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int n; cin >> n;
    vector<long long int> v(n+1, 0);

    long long int sum = 0;
    for (long long int i = 1; i <= n; i++){
        cin >> v[i];
        
    }
    long long int ans = 1e9;
    for (long long int j = 1; j <= n; j++){
        long long int tempAns = 0;
        
        for (long long int i = 1; i <= n; i++){
            tempAns += (abs(j-i)+i-1+j-1)*v[i];
        }
        tempAns *= 2;

        ans = min(ans, tempAns);
    }
    cout << ans << "\n";
}