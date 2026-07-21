//https://codeforces.com/problemset/gymProblem/106552/J
#include <bits/stdc++.h>
using namespace std;
 
vector<long long int> rec(1e6+5, 0);

vector<long long int> sieve(long long int n){
    vector<bool> is_prime(n+1, true);
    vector<long long int> res(1e6+5, 0);
    is_prime[0] = is_prime[1] = false;
 
    for (long long int i = 2; i <= n; i++){
        if(is_prime[i]){
            for(long long int j = i; j <= n; j+=i){
                res[i] += rec[j]; 
                if(j != i) is_prime[j] = false;
            }
            
        }
    }
    return res;
}

int main(){
    long long int n; cin >> n;
    long long int maiorEle = -1;
    while(n--){
        long long int temp; cin >> temp;
        if(temp > maiorEle) maiorEle = temp;
        rec[temp]++;
    }

    vector<long long int> ans = sieve(maiorEle+1);

    long long int maiorAns = -1;
    long long int maiorIdx = 0;
    for (long long int i = 0; i < maiorEle+1; i++){
        // cout << ans[i] << " ";

        if(ans[i] > maiorAns){
            maiorAns = ans[i];
            maiorIdx = i;
        } 
    }
    // cout << endl;
    cout << maiorIdx << endl;
    
}