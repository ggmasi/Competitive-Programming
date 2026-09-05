// url: https://codeforces.com/contest/2259/problem/C
// Title: 101
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
        bool first = false;
        int last = -1;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == -1){
                if(!first){
                    v[i] = 1;
                    first = true;
                }else{
                    v[i] = 0;
                }
                last = i;
            }else if(v[i] == 1){
                first = true;
                last = i;
            }
        }
        if(last != -1){
            v[last] = 1;
        }

        for(int x : v){
            cout << x << " ";
        }
        cout << "\n";
    }
    
    return 0;
}