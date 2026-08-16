// url: https://codeforces.com/gym/106054/problem/G
// Title: Going to the kiosk
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c; cin >> a >> b >> c;
    
    int temp = b-a;

    if(temp%c == 0){
        cout << "S\n";
    }else{
        cout << "N\n";
    }


    return 0;
}