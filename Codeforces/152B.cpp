//https://codeforces.com/contest/152/problem/B
// Steps
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int x, y; cin >> x >> y;
    int k; cin >> k;
    long long int ans = 0;
    while(k--){
        int dx, dy; cin >> dx >> dy;
        if(dx+x > n || dx+x < 1 || dy+y < 1 || dy+y > m) continue;
        // cout << x << " " << y << "\n";
        
        int diffX = dx >= 0 ? n-x : x-1, diffY = dy >= 0 ? m-y : y-1;
        int mult;
        if(dx == 0){
            mult = abs(diffY/dy);
            diffX = 0;
            // cout << diffY << " " << dy << " " << mult << endl;
        } 
        else if(dy == 0){
            mult = abs(diffX/dx);
            diffY = 0;
        } 
        else mult = min(abs(diffX/dx), abs(diffY/dy));
        
        
        ans += abs(mult);

        x += dx*mult;
        y += dy*mult;
    }
    
    cout << ans << "\n";
    return 0;
}