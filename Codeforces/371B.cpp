// url: https://codeforces.com/contest/371/problem/B
// Title: Fox Dividing Cheese
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int a, b; cin >> a >> b;

    long long int ans = 0;
   
    vector<long long int> div = {2, 3, 5};

    for (int x : div){
        long long int cntA = 0, cntB = 0;

        while(a%x == 0){
            a /= x;
            cntA++;
        }

        while(b%x == 0){
            b /= x;
            cntB++;
        }

        ans += abs(cntA-cntB);
    }
    
    if(a != b){
        cout << "-1\n";
    }else{
        cout << ans << "\n";
    }

    return 0;
}