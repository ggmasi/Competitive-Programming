// url: https://codeforces.com/gym/106679/problem/F
// Title: Flower
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

//f(y) = x f(x) = 3y
//f(x) = f(x-1)+1

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> v(1e7+5, 0);
    vector<int> f(1e7+5, 0);
    f[1] = 2;
    v[2] = 1;

    for (int i = 2; i <= n; i++){
        if(v[i]){
            f[i] = 3*v[i];
        }else{
            f[i] = f[i-1]+1;
        }

        if(f[i] <= n){
            v[f[i]] = i;
        }
    }
    
    cout << f[n] << "\n";

    return 0;
}