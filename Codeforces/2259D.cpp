// url: https://codeforces.com/contest/2259/problem/D
// Title: MEX Multiset
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
        vector<int> v(n);
        int numZ = 0;
        for (int i = 0; i < n; i++){
            cin >> v[i];
    
            if(v[i] == 0){
                numZ++;
            }
        }

        if(numZ == 1){
            cout << "NO\n";
            continue;
        }

        if(numZ == 0){
            cout << "YES\n";
            cout << "ABC";
            for (int i = 0; i < n-3; i++){
                cout << "A";
            }
            cout << "\n";
            continue;
        }
        cout << "YES\n";
        bool flagA = false;
        for (int i = 0; i < n; i++){
            if(v[i] == 0){
                if(!flagA){
                    cout << "A";
                    flagA = true;
                }else{
                    cout << "B";
                }
            }else{
                cout << "C";
            }
        }
        cout << "\n";


    }
    
    return 0;
}