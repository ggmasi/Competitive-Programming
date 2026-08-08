//https://codeforces.com/problemset/problem/707/C
// Pythagorean Triples
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;

    if(n == 2 || n == 1){
        cout << "-1\n";
        return 0;
    }

    if(n%2 == 0){
        long long int b = ((n*n)/4)-1, c = ((n*n)/4)+1;
        cout << b << " " << c;
    }else{
        long long int b = ((n*n)-1)/2, c = ((n*n)+1)/2;
        cout << b << " " << c;
    }
}