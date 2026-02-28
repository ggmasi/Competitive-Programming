#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int mid;
        if(n%2){
            mid = (n/2)+1;
        }else{
            mid = n/2;
        }
        for (int i = 1; i <= n; i++){
            int temp;
            cin >> temp;
            if(temp == i) continue;
            if(temp%2 == 1){
                if(temp >= mid){
                    cout << "NO" << endl;
                    break;
                }
                if(i%temp == 0 && i%2 == 0 && i != 1){
                    continue;
                }
            }


        }
        
        
        
    }
}