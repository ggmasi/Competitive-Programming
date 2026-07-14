//https://codeforces.com/gym/103960/problem/E
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v((5*10e5)+5, 0);

    int ans = 0;
    int n; cin >> n;
    while(n--){
        int temp; cin >> temp;
        
        
        if(v[temp+1] == 0){
            // cout << "aqui" << endl;
            ans++;
        }else{
            v[temp+1]--;
        }
        v[temp]++;
        // for (int i = 1; i <= 5; i++){
        //     cout << v[i] << " ";
        // }
        // cout << endl;
    }

    cout << ans << endl;
}