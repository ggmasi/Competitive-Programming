//https://judge.beecrowd.com/pt/problems/view/1166
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> memo(50, -1);
    memo[0] = 1;
    memo[1] = 3;
    int add = 4;
    for (int i = 2; i < 50; i++){
        memo[i] = memo[i-1]+add;
        if(i%2){
            add+=2;
        } 
    }
    


    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << memo[n-1] << endl;

    }
    
}