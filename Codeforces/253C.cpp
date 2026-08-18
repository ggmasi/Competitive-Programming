// url: https://codeforces.com/contest/253/problem/C
// Title: Text Editor
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;

    int ans = 0;

    while(r1 != r2 || c1 != c2){
        if(r1 > r2){
            r1--;
        }else if(r1 < r2){
            r1++;
        }else if(c1 > v[r1-1]+1){
            c1 = v[r1-1]+1;
            continue;
        }else if(r1 == r2){
            

            if(c1 > c2) c1--;
            else if(c1 < c2) c1++;
        }
        // cout << r1 << " " << c1 << endl;

        ans++;
    }
    
    cout << ans << "\n";
    
    return 0;
}