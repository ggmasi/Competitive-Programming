//https://cses.fi/problemset/task/1082
#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

int main(){
    long long n; cin >> n;
    long long sum = 0;
    for (long long l = 1; l <= n; ){
        long long k = n/l;
        long long r = n/k;

        long long a, b;
        a = (l+r);
        b = (r-l+1);

        if(a%2 == 0){
            a/=2;
        }else{
            b/=2;
        }

        a%=mod;
        b%=mod;
        long long kMod = k%mod;

        long long pa = (a*b)%mod;
        pa = (pa*kMod)%mod;

        sum = (sum+pa)%mod;
        l = r+1;
    }
    


    cout << sum << endl; 
}