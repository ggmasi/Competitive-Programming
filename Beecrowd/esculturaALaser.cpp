//https://judge.beecrowd.com/pt/problems/view/1107
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, c; cin >> a >> c;
    while(a != 0 && c != 0){
        int temp; cin >> temp;
        int ant = temp;
        int sum = a-temp;
        for (int i = 1; i < c; i++){
            cin >> temp;
            if(temp < ant){
                sum += ant-temp;
            }
            ant = temp;
        }
        
        cout << sum << endl;
        cin >> a >> c;        
    }

}