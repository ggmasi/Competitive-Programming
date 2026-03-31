#include <bits/stdc++.h>
using namespace std;

vector<int> memo;
vector<int> calls;
int cnt = 3;

int fib(int f){
    if(f <= cnt){
        return memo[f];
    }
    memo.push_back(fib(f-1) + fib(f-2));
    if(f > 3){
        calls.push_back(calls[f-1]+calls[f-2]+2);
    }
    cnt++;
    return memo[f]; 
}

int main(){
    memo.push_back(0);  //memo[0]   = 0
    memo.push_back(1);  //memo[1]   = 1
    memo.push_back(1);  //memo[2]   = 1
    memo.push_back(2);  //memo[3]   = 2
    calls.push_back(0); //calls[0]  = 0
    calls.push_back(0); //calls[1]  = 0
    calls.push_back(2); //calls[2]  = 2
    calls.push_back(4); //calls[3]  = 4

    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        int res = fib(a);
        cout << "fib(" << a << ") = " << calls[a] << " calls = " << res << endl; 
        
    }

    

}