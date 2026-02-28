#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int atual;
    cin >> atual;
    int maior = -1, cnt = 1;
    for (int i = 0; i < n-1; i++){
        int temp;
        cin >> temp;
        if(temp == atual+1){
            cnt++;
        }else{
            if(maior < cnt){
                maior = cnt;
            }
            cnt = 1;
        }
        atual = temp;
    }
    if(maior < cnt){
        maior = cnt;
    }
    cout << maior << endl;
}