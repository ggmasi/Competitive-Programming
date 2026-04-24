//https://codeforces.com/problemset/problem/706/B/
#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 1e5+5;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    int q; cin >> q;
    for (int i = 0; i < q; i++){
        int temp;cin >> temp;
        int ans = upper_bound(v.begin(), v.end(), temp) - v.begin();
        
        cout << ans << endl;
    }
    
}