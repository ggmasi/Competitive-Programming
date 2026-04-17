//https://codeforces.com/problemset/problem/1138/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int sub = 0;
    int ult = 0;
    int atual = 1;
    int t1; cin >> t1;
    for (int i = 1; i < n; i++){
        int temp; cin >> temp;
        if(temp == t1){
            atual++;
        }else{
            sub = max(sub, min(ult, atual));
            ult = atual;
            atual = 1;
        }
        t1 = temp;
    }
    sub = max(sub, min(ult, atual));
    cout << sub*2 << "\n";
    return 0;
}