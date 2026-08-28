// url: https://codeforces.com/gym/106667/problem/K
// Title: Karamelos at São João
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main()
{
    ll a, x; cin >> a >> x;

    for (int i = 0; i <= 1e4 + 5; i++){
        if(((x*i)-1)%a == 0 && x*i >= a){
            cout << i << "\n";
            return 0;
        }
    }
    
    cout << "-1\n";
    
    return 0;
}