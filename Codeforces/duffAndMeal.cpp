//https://codeforces.com/problemset/problem/588/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int menor = 101;
    int sum = 0;
    while(n--){
        int a, p; cin >> a >> p;
        if(p < menor) menor = p;

        sum += a*menor;
    }

    cout << sum << "\n";
    return 0;
}