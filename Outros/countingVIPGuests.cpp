#include <bits/stdc++.h>
using namespace std;



int main(){
    long long int t; cin >> t;
    while(t--){
        long long int a, b; cin >> a >> b;
        long long int count = 0;
        long long int temp = 1;
        while(temp <= b){
            if(temp >= a && temp <= b) count++;
            if(temp > b/2) break;
            temp *= 2;
        }
        cout << count << endl;
    }

    

}