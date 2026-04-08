#include <bits/stdc++.h>
using namespace std;



int main(){
<<<<<<< HEAD
    int n, k; cin >> n >> k;

    vector<int> h(n);
    h[0] = 0;

    for (int i = 1; i < n; i++){
        for (int j = i; j > 0; j++)
        {
            /* code */
        }
        
    }
    
    
    

    
=======
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
>>>>>>> 941abb22a5332a35806b31cc7da4007d4bdf7db8
}