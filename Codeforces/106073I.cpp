// url: https://codeforces.com/gym/106073/problem/I
// Title: Investigating Quadradômeda
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<pii> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    int diff = abs(v[0].first-v[1].first)+abs(v[0].second-v[1].second);
    int r = diff-1;
    int l = 1;
    int ans = -1;
    while(l <= r){
        int mid = l+(r-l)/2;
        int flag = 0;
        int temp = mid;
        for (int i = 1; i < n; i++){
            int diffAtual = abs(v[i-1].first-v[i].first)+abs(v[i-1].second-v[i].second);
            if(temp >= diffAtual){
                if(i%2 != 0){
                    flag = -1;
                }else{
                    flag = 1;
                }
                break;
            }
            temp = abs(diffAtual-temp);
        }

        if(flag == 0){
            l = mid+1;
            ans = mid;
        }else if(flag == 1){
            l = mid+1;
        }else r = mid-1;
        
    }

    cout << ans << "\n";
    
    
    return 0;
}