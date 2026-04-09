#include <bits/stdc++.h>
using namespace std;

vector<long long int> memo(200200, -1);

long long int fib(long long int x){
    if(x == 0) return 0;
    if(x <= 2) return 1;
    if(memo[x] != -1) return memo[x];
    return memo[x] = fib(x-1)+fib(x-2);
    return fib(x-1)+fib(x-2);
}

int main(){
    long long int n; cin >> n;
    while(n--){
        long long int t; cin >> t;
        cout << "Fib(" << t << ") = " <<  fib(t) << endl;
        
    }
    return 0;
}