//https://codeforces.com/problemset/problem/492/A
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int i = 1, nivel = 0, j = 1, k = 1;
    while(1){
        j += k;
        i += j + nivel+1;
        k++;
        nivel++;
        if(n < i){
            break;
        }
    }
 
    cout << nivel << endl;
    return 0;
}