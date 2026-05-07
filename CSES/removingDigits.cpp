//https://cses.fi/problemset/task/1637
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int cnt = 0;
    while(n != 0){
        int temp = n;
        int sub = 0;
        while(temp > 0){
            sub = max(sub, temp%10);
            temp /= 10;
        }
        n -= sub;
        cnt++;
    }
    
    cout << cnt << endl;
}