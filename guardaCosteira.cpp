#include <bits/stdc++.h>
using namespace std;

int main(){
    int d;
    while(cin >> d){
        int vf, vg; cin >> vf >> vg;
        if(vf >= vg){
            cout << 'N' << endl;
            continue;
        } 
        double hip = sqrt(144+(d*d));
        if((12/vf) >= (hip/vg)){
            cout << 'S' << endl;
        }else{
            cout << 'N' << endl;
        }
    }

    return 0;
}