//https://codeforces.com/gym/104555/problem/L
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;

    vector<vector<char>> matrix(k);
    int tam[k];
    memset(tam, 0, sizeof(tam));
     
    for (int i = 0; i < k; i++){
        for (int j = i; j < s.length(); j += k){
            matrix[i].push_back(s[j]);
            tam[i]++;
            
        }
    }
    
    for (int i = 0; i < k; i++){
        sort(matrix[i].begin(), matrix[i].end());
    }
    
    for (int i = 0; i < tam[0]; i++){
        for (int j = 0; j < k; j++)
        {   
            if(i < tam[j]){
                cout << matrix[j][i];

            }
        }
    }
    cout << endl;
    return 0;

}