// url: https://codeforces.com/contest/2257/problem/B
// Title: Gigantomachy
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;

        int hp1 = n, hp2 = m;
        int last; cin >> last;
        for (int i = 1; i < n; i++){
            int temp; cin >> temp;
            if(last > temp){
                hp1 += last-temp;
            }
            last = temp;
        }
        hp1 += last;

        last; cin >> last;
        for (int i = 1; i < m; i++){
            int temp; cin >> temp;
            if(last > temp){
                hp2 += last-temp;
            }
            last = temp;
        }
        hp2 += last;

        if(hp2 > hp1){
            cout << "2\n";
        }else cout << "1\n";
        
    }
    
    return 0;
}