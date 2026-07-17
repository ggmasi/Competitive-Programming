//https://codeforces.com/contest/709/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, b, d; cin >> n >> b >> d;
    long long int sum = 0;
    long long int res = 0;
    while(n--){
        long long int t; cin >> t;
        if(t > b) continue;
        sum += t;
        if(sum > d){
            res++;
            sum = 0;
        }
    }

    cout << res << endl;
}