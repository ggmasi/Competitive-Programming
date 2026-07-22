//https://codeforces.com/problemset/problem/767/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n+1, 0);
    int atual = n;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(temp == atual){
            cout << temp;
            atual--;
            while(v[atual] == 1){
                cout << " " << atual;
                atual--;
            }
        }else{
            v[temp] = 1;
        }
        cout << "\n";
    }
    
}