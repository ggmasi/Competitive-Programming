//https://codeforces.com/contest/427/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int p = 0;
    int cnt = 0;
    while(n--){
        int temp; cin >> temp;
        if(temp == -1 && p == 0){
            cnt++;
        }else{
            p += temp;
        }
    }

    cout << cnt << endl;
}