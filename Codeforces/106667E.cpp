// url: https://codeforces.com/gym/106667/problem/E
// Title: The Scale Riddle 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main(){
    int n; cin >> n;
    int l = 1, r = n;

    while(l < r){
        cout << "? ";
        int div = (r-l+1)/3;

        if(div == 0){
            cout << 1 << " " << l << " " << r;
            cout << "\n";
            cout.flush();
            char c; cin >> c;
            if(c == 'E'){
                cout << "! " << l << "\n";
            }else{
                cout << "! " << r << "\n";
            }
            return 0;
        }

        cout << div;

        for (int i = 0; i < div; i++){
            cout << " " << i+l;
        }

        for (int i = 0; i < div; i++){
            cout << " " << r-i;
        }
        cout << "\n";
        cout.flush();
        
        char c; cin >> c;
        if(c == 'E'){
            r = l+div-1;
        }else if(c == 'D'){
            l = r-div+1;
        }else{
            l = l+div;
            r = r-div;
        }
    }

    cout << "! " << l << "\n";
    cout.flush();

}