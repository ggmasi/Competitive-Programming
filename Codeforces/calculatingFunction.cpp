//https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;

    if(n%2){
        cout << -(n/2)-1 << endl;
    }else{
        cout << n/2 << endl;
    }
}