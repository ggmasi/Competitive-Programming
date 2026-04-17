#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> fib(n);
    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; i++){
        fib[i] = fib[i-2] + fib[i-1];
    }
    
    cout << fib[n-1] << "\n";
    return 0;

}