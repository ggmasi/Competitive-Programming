//https://codeforces.com/problemset/problem/580/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ans = 1;
    int ant;
    int cnt = 1;
    cin >> ant;
    for (int i = 1; i < n; i++){
        int temp; cin >> temp;
        if(temp >= ant){
            cnt++;
        }else{
            ans = max(ans, cnt);
            cnt = 1;
        }
        ant = temp;
    }
    ans = max(ans, cnt);
    cout << ans << endl;

}