// url: https://codeforces.com/group/jlSbN106ET/contest/714583/problem/B
// Title: Hypercarp and the Control Panel
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        bool trocou = false;
        for (int i = 1; i < n-2; i++){
            if(v[i-1] == v[i] && v[i] != v[i+1] && v[i+1] == v[i+2]){
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                trocou = true;
                break;
            }
        }
        
        if(!trocou){
            for (int i = 1; i < n; i++){
                if(v[i-1] == v[i] && i < n-1 && v[i] != v[i+1] && (i == n-2 || (i < n-2 && v[i+2] != v[i]))){
                    int temp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = temp;
                    trocou = true;
                    break;
                }
            }
        }

        if(!trocou){
            for (int i = n-2; i >= 0; i--){
                if(v[i+1] == v[i] && i > 0 && v[i] != v[i-1] && (i == 1 || (i > 1 && v[i-2] != v[i]))){
                    int temp = v[i];
                    v[i] = v[i-1];
                    v[i-1] = temp;
                    trocou = true;
                    break;
                }
            }
        }
        


        int ans = n;
        for (int i = 1; i < n; i++){
            if(v[i-1] == v[i]) ans--;
        }
        
        cout << ans << "\n";

    }
    
    
    return 0;
}