#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, d;
    while(cin >> n >> d && (n != 0 || d != 0)){
        string num; cin >> num;

        string resultado = "";
        int apagados = 0;

        for (char c : num){
            while(!resultado.empty() && c > resultado.back() && apagados < d){
                resultado.pop_back();
                apagados++;
            }
            resultado.push_back(c);
        }
        

        while(resultado.size() > n-d){
            resultado.pop_back();
        }

        cout << resultado << endl;
       
    }
    
    return 0;

}