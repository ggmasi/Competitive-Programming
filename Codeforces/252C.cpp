// url: https://codeforces.com/contest/252/problem/C
// Title: Points on Line
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    ll d; cin >> d;

    if(n <= 2){
        cout << "0\n";
        return 0;
    }

    vector<ll> v(n);
    cin >> v[0] >> v[1];
    int l = 0;
    ll ans = 0;
    for (int i = 2; i < n; i++){
        cin >> v[i];
    
        while(v[i]-v[l] > d) l++;

        long long diff = i-l-1;

        ans += (diff*(diff+1))/2;
        
    }
    
    
   

    cout << ans << "\n";
    
    return 0;
}