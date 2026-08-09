// url: https://codeforces.com/problemset/problem/791/A
// Title: Bear And Big Brother
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int count = 0;
    while(a <= b){
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count << endl;
}