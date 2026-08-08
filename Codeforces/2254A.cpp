//https://codeforces.com/contest/2254/problem/A
// Riptide
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        int ans = 0;
        while(a != b && a != c && b != c){
            ans++;
            if(a > b && a > c){
                a--;
                if(b > c){
                    c++;
                }else b++;
            }else if(b > a && b > c){
                b--;
                if(a > c){
                    c++;
                }else a++;
            }else{
                c--;
                if(a > b){
                    b++;
                }else a++;
            }
        }
        cout << ans << "\n";
    }
}