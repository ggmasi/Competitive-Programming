//https://codeforces.com/contest/463/problem/B
// Caisa And Pylons
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long int hp = 0, altura = 0;
    long long int ans = 0;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        int diff = temp-altura;
        
        if(diff > 0){
            if(hp >= diff){
                hp -= diff;
            }else{
                ans += diff-hp;
                hp = 0;
            }
        }else{
            hp -= diff;
        }

        altura = temp;
    }
    
    cout << ans << "\n";
    return 0;
}