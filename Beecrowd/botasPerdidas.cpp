//https://judge.beecrowd.com/pt/problems/view/1245
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    while(cin >> t){
        map<int, int> m;
        int sum = 0;
        
        for(int i = 0; i < t; i++){
            int temp; cin >> temp;
            char c; cin >> c;
            if(c == 'D'){
                if(m[temp] < 0){
                    sum++;
                }
                m[temp]++;
            }else{
                if(m[temp] > 0){
                    sum++;
                }
                m[temp]--;
            }
        }    
        cout << sum << endl;
    }
    
 
    return 0;
}