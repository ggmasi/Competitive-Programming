//https://codeforces.com/gym/106038/problem/C
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int idx = -1;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        char temp;
        cin >> temp;
        if(temp == '('){
            cnt++;
        }else{
            if(cnt > 0){
                cnt--;
            }else{
                idx = i;
            }
        }
    }
    
    cout << idx+1 << endl;
}