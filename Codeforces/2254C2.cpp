// url: https://codeforces.com/contest/2254/problem/C2
// Title: Marenol Hard Version
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string a, b; cin >> a >> b;
        if(n < 3){
            if(a == b){
                cout << "0\n";
                continue;
            }else{
                cout << "-1\n";
                continue;
            }
        }

        // int contA = 0, contB = 0;
        queue<int> filaA, filaB;
        long long int ans = 0;
        for (int i = 0; i < n; i+= 2){
            if(a[i] == '1'){
                // contA++;
                if(filaB.empty()){
                    filaA.push(i);
                }else{
                    ans += (i-filaB.front())/2;
                    filaB.pop();
                }
            } 
            if(b[i] == '1'){
                if(filaA.empty()){
                    filaB.push(i);
                }else{
                    ans += (i-filaA.front())/2;
                    filaA.pop();
                }
            } 
        }
        
        if(!filaA.empty() || !filaB.empty()){
            cout << "-1\n";
            continue;
        }

        for (int i = 1; i < n; i+= 2){
            if(a[i] == '1'){
                // contA++;
                if(filaB.empty()){
                    filaA.push(i);
                }else{
                    ans += (i-filaB.front())/2;
                    filaB.pop();
                }
            } 
            if(b[i] == '1'){
                if(filaA.empty()){
                    filaB.push(i);
                }else{
                    ans += (i-filaA.front())/2;
                    filaA.pop();
                }
            } 
        }
        
        if(!filaA.empty() || !filaB.empty()){
            cout << "-1\n";
            continue;
        }

        cout << ans << "\n";
    }
}