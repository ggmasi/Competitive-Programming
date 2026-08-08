//https://codeforces.com/contest/451/problem/B
// Sort The Array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int l = -1, r = -1, comeco = -1, antes = -1;
    bool flag = false;
    bool poss = true;
    int ult = v[0];
    for (int i = 1; i < n; i++){
        int temp = v[i];
        if(!flag){
            if(ult <= temp){
                ult = temp;
                continue;
            } 
            if(r != -1){
                poss = false;
                ult = temp;
                continue;
            }
            flag = true;
            l = i;
            comeco = ult;
            if(i > 1){
                antes = v[i-2];
            }
        }else{
            if(ult >= temp){
                ult = temp;
                continue;
            } 
            if(comeco > temp || antes > v[i-1]){
                poss = false;
            }
            r = i;
            flag = false;
        }

        ult = temp;
        
    }
    // cout << comeco << endl;
    // cout << l << " " << r << "\n";
    // cout << antes << endl;
    if(flag && r == -1 && antes <= v[n-1]){
        r = n;
    }


    if(poss && l == -1 && r == -1){
        cout << "yes\n1 1\n";
    }else if(!poss || r == -1){
        cout << "no\n";
    }else{
        cout << "yes\n" << l << " " << r << "\n";
    }

    return 0;
}