//https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0){
            cout << "YES" << endl;
            continue;
        }

        if((2*b-a)%3 || 2*b-a < 0 || (2*a-b)%3 || 2*a-b < 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}