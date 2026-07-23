//https://codeforces.com/contest/1237/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    bool flag = false;
    while(n--){
        int temp; cin >> temp;
        if(temp%2){
            if(!flag){
                cout << (temp+1)/2 << "\n";
                flag = true;
            }else{
                cout << (temp-1)/2 << "\n";
                flag = false;
            }
        }else{
            cout << temp/2 << "\n";
        }
    }

    return 0;
}