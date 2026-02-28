#include <bits/stdc++.h>
using namespace std;

int main(){
    int vr, vl, vd, vm, n;
    cin >> vr >> vl >> vd >> vm >> n;
    int total = vr+vl+vd+vm+n;
    int b = 0;
    if(vd+n > total/2){
        cout << "Donatello" << endl;
        b = 1;
    }

    if(vl+n > total/2){
        cout << "Leonardo" << endl;
        b = 1;
    }

    if(vm+n > total/2){
        cout << "Michelangelo" << endl;
        b = 1;
    }

    if(vr+n > total/2){
        cout << "Rafael" << endl;
        b = 1;
    }

    if(b == 0){
        cout << "sem vencedores" << endl;
    }
    return 0;
}