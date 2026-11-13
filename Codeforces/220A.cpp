// url: https://codeforces.com/problemset/problem/220/A
// Title: Little Elephant and Problem
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v(n);
    vector<int> sorted(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sorted[i] = v[i];
    }
    sort(sorted.begin(), sorted.end());
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if(sorted[i] != v[i]){
            cnt++;
        }
    }
    
    if(cnt <= 2){
        cout << "YES\n";
    }else cout << "NO\n";

    
    return 0;
}