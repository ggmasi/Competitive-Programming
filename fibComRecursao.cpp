#include <bits/stdc++.h>
using namespace std;

vector<int> memo(200200, -1);

int fib(int x){
    if(x <= 2) return 1;
    if(memo[x] != -1) return memo[x];
    return memo[x] = fib(x-1)+fib(x-2);
}

int main(){
    int n; cin >> n;
    cout << fib(n) << endl;
    return 0;
}