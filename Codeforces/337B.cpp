//https://codeforces.com/contest/337/problem/B
// Routine Problem
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    if(a*d <= b*c){
        int num = b*c-a*d;
        int div = b*c;
        int mdc = gcd(num, div);
        cout << num/mdc << "/" << div/mdc;
    }else{
        int num = a*d-b*c;
        int div = a*d;
        int mdc = gcd(num, div);
        cout << num/mdc << "/" << div/mdc;
    }

    return 0;
}