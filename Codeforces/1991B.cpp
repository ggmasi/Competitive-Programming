// url: https://codeforces.com/contest/1991/problem/B
// Title: AND Reconstruction
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> b;
        b.push_back(0);
        for (int i = 0; i < n-1; i++){
            int temp; cin >> temp;
            b.push_back(temp);
        }
        b.push_back(0);
        vector<int> a;
        for (int i = 1; i <= n; i++){
            a.push_back(b[i-1]|b[i]);
        }
        bool flag = true;
        for (int i = 1; i < n; i++){
            if((a[i-1]&a[i]) != b[i]){
                flag = false;
                break;
            }
        }
        
        if(flag){
            for(auto x : a){
                cout << x << " ";
            }
        }else{
            cout << "-1";
        }
        cout << "\n";
        
    }

    return 0;
}