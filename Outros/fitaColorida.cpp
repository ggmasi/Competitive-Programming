//https://neps.academy/br/exercise/49
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> fita(n);
    
    for (int i = 0; i < n; i++){
        cin >> fita[i];
        if(fita[i] == -1) fita[i] = 10;
    }

    
    for (int i = fita.size()-2; i >= 0; i--){
        fita[i] = min(fita[i], min(fita[i+1]+1, 9));
    }
    cout << fita[0] << " ";
    for (int i = 1; i < n; i++){
        fita[i] = min(fita[i], min(fita[i-1]+1, 9));
        cout << fita[i] << " ";
    }
    cout << endl;
}