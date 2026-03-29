#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
   int t; cin >> t;
   int x = 0;
   int sum = 0;
   for(int i = 0; i < t; i++){
       int temp; cin >> temp;
       if(temp != x){
           sum++;
       }
       x = temp;
   }
 

    cout << sum << endl;
    return 0;
}