//https://codeforces.com/contest/746/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string ans = "";
    if(n%2 == 0){
        char temp; cin >> temp;
        ans += temp;
        for (int i = 0; i < n-1; i++){
            cin >> temp;
            if(i%2 == 0){
                ans += temp;
            }else{
                ans = temp + ans;
            }
        }
    }else{
        char temp; cin >> temp;
        ans += temp;
        for (int i = 0; i < n-1; i++){
            cin >> temp;
            if(i%2 == 1){
                ans += temp;
            }else{
                ans = temp + ans;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}