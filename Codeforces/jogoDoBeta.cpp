#include  <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n){
    vector<bool> is_prime(n+1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++){
        if(is_prime[i]){
            primes.push_back(i);
            
            for(int j = i; j <= n; j+=i){
                if(j != i)is_prime[j] = false;
            }
            
        }
    }
    return primes;
}


int main(){
    int n; cin >> n;
    vector<int> nums(n);
    int maior = -1;
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    maior = nums[n-1];

    vector<int> primos = sieve(maior);
    vector<int> numDiv(primos.size(), 0);
    
    
    for (int i = 0; i < n; i++){
        int idx = 0;
        while(nums[i]%primos[idx] != 0) idx++;

        numDiv[idx]++;
    }
    

    auto max_it = max_element(numDiv.begin(), numDiv.end());
    cout << primos[max_it-numDiv.begin()] << endl;
}