// url: https://codeforces.com/problemset/problem/1848/B
// Title: Vika and the Bridge
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> cores(k+1, 0);
        vector<int> maior(k+1, 0);
        vector<int> segMaior(k+1, 0);
        

        for(int i = 1; i <= n; i++){
            int temp; cin >> temp;
            if(i-cores[temp] >= maior[temp]){
                segMaior[temp] = maior[temp];
                maior[temp] = i-cores[temp];
            }else if(i-cores[temp] > segMaior[temp]){
                segMaior[temp] = i-cores[temp];
            }

            cores[temp] = i;
        }

        for (int i = 1; i <= k; i++){
            if((n+1)-(cores[i]) >= maior[i]){
                segMaior[i] = maior[i];
                maior[i] = (n+1)-cores[i];
            }else if((n+1)-cores[i] > segMaior[i]){
                segMaior[i] = (n+1)-cores[i];
            }
        }
        

        // for(auto x : maior){
        //     cout << x << " ";
        // }
        // cout << "\n";
        // for(auto x : segMaior){
        //     cout << x << " ";
        // }
        // cout << "\n";

        int div = maior[1]/2;
        if(div*2 != maior[1]) div++;

        int ans = max(segMaior[1], div);
        for (int i = 2; i <= k; i++){
            div = maior[i]/2;
            if(div*2 != maior[i]) div++;
            ans = min(ans, max(segMaior[i], div));
        }
        
        cout << ans-1 << "\n";
        
        
        
    }

    return 0;
}