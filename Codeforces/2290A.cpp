// url: 
// Title: 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if(v[0] == v[1]-1 && v[1] == v[2]-1){
            cout << "YES\n";
        }else cout << "NO\n";
    }
    
    return 0;
}