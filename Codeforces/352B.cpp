// url: https://codeforces.com/contest/352/problem/B
// Title: Jeff And Periods
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0;
    vector<int> diff(1e5+5, 0);
    vector<int> ultimo(1e5+5, 0);
    

    for (int i = 1; i <= n; i++){
        int temp; cin >> temp;
        if(ultimo[temp] == -1) continue;
        if(ultimo[temp] == 0){
            ans++;
            ultimo[temp] = i;
        }else{
            if(diff[temp] == 0){
                diff[temp] = i-ultimo[temp];
            }else{
                if(i-ultimo[temp] != diff[temp]){
                    ultimo[temp] = -1;
                    ans--;
                    continue;
                }
            }
            ultimo[temp] = i;
        }
    }
    
    cout << ans << "\n";

    for(int i = 0; i < 1e5+5; i++){
        if(ultimo[i] > 0){
            cout << i << " " << diff[i] << "\n"; 
        }
    }
    
    return 0;
    
}