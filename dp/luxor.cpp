#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    vector<int> pos;
    vector<int> neg;
    int idxP = 0, idxN = 0;
    int total = 0;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        total += temp;
        if(temp >= 0){
            pos.push_back(temp);
        }else{
            neg.push_back(temp);
        }
    }

    if(total >= l || total < -l){
        cout << 'N' << endl;
        return 0;
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    cout << 'S' << endl;
    int soma = 0;
    for (int i = 0; i < n; i++){
        if(idxN < neg.size()){
            if(soma + neg[idxN] >= -l){
                cout << neg[idxN] << " ";
                soma += neg[idxN];
                idxN++;
                continue;
            }
        }
        if(soma + pos[idxP] <= l-1){
            cout << pos[idxP] << " ";
            soma += pos[idxP];
            idxP++;
        }
    }
    return 0;
    
}