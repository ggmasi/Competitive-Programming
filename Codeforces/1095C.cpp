// url: https://codeforces.com/problemset/problem/1095/C
// Title: Powers Of Two
#include <bits/stdc++.h>
using namespace std;

vector<long long int> v;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n, k; cin >> n >> k;

    long long int numBits = __builtin_popcount(n);

    if(k < numBits){
        cout << "NO\n";
        return 0;
    }

    priority_queue<long long int> fp;

    long long int atual = 1;

    while(atual <= n){
        if(atual & n){
            // cout << atual << endl;
            fp.push(atual);
        }

        atual *= 2;
    }

    while(fp.top() != 1 && fp.size() < k){
        fp.push(fp.top()/2);
        fp.push(fp.top()/2);
        fp.pop();
    }

    if(fp.size() == k){
        cout << "YES\n";
        while(!fp.empty()){
            cout << fp.top() << " ";
            fp.pop();
        }
        
    }else{
        cout << "NO\n";
    }



    return 0;
}