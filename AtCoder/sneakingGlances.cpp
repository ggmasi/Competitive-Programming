//https://atcoder.jp/contests/abc453/tasks/abc453_c
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
int numPassou = 0;

int solve(int idx, long long pos){
    if(idx == n){
        return 0;
    }

    int cnt;
    if(((pos+2*v[idx]) > 0) != (pos > 0)){
        cnt = 1;
    }else cnt = 0;
    long long positivo = cnt+solve(idx+1, pos+(2*v[idx]));

    if(((pos-2*v[idx]) > 0) != (pos > 0)){
        cnt = 1;
    }else cnt = 0;
    long long negativo = cnt+solve(idx+1, pos-(2*v[idx]));

    return max(positivo, negativo);
}


int main(){
    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    long long res = solve(0, 1);

    cout << res << endl;
}