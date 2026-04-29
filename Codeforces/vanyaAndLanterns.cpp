//https://codeforces.com/problemset/problem/492/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d; cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    int maxDiff = v[0]*2;

    for (int i = 1; i < n; i++){
        maxDiff = max(maxDiff, v[i] - v[i-1]);
    }
    
    maxDiff = max(maxDiff, (d-v[n-1])*2);

    double res = (double) maxDiff/2;

    cout << fixed << setprecision(10) << res << endl;
}