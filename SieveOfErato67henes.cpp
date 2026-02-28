#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        bool flag67 = false;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 67){
                flag67 = true;
            }
        }
        
        if(flag67){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        // sort(v.begin(), v.end());

        // int pI = 0; int pF = n-1;
        // bool flag = true;
        // while(pI < pF){
        //     if(v[pI]*v[pF] == 67){
        //         cout << "YES" << endl;
        //         flag = false;
        //         break;
        //     }
        //     else if(v[pI]*v[pF] > 67){
        //         pF--;
        //     }else{
        //         pI++;
        //     }
        // }
        // if(flag){
        //     cout << "NO" << endl;
        // }
    }

    return 0;
}