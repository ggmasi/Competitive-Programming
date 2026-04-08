#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int l1 = 0, l2 = 0;

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(temp == 1){
            l1 = !l1;
        }else{
            l1 = !l1;
            l2 = !l2;
        }
    }
    
    cout << l1 << "\n" << l2 << "\n";

    return 0;
}