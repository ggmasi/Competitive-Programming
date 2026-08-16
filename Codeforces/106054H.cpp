// url: https://codeforces.com/gym/106054/problem/H
// Title: Hidden divisor
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(n == 1 && v[0] == 1){
        cout << "*\n";
        return 0;
    }
    
    sort(v.begin(), v.end());

    if(v[0] != 1){
        cout << v[n-1] << " 1\n";
        return 0;
    }

    ll maior = v[n-1];
    ll proxMaior = maior*v[1];

    int l = 1, r = n-2;

    while(l < r){
        if(v[r]*v[r] == maior) r--;
        if(v[l]*v[l] == maior) l++;
        if(l >= r) break;

        if(maior%v[l] > 0 || maior%v[r] > 0){
            cout << proxMaior << " " << proxMaior << "\n";
            return 0;
        }

        if(v[l]*v[r] == maior){
            l++; r--; continue;
        }

        if(v[l+1]*v[r] == maior){
            cout << maior << " " << maior/v[l] << "\n";
            return 0;
        }else if(v[l]*v[r-1] == maior){
            cout << maior << " " << maior/v[r] << "\n";
            return 0;
        }
    }
    
    if(l == r){
        if(maior%v[l] > 0){
            cout << proxMaior << " " << proxMaior << "\n";
            return 0;
        }
        if(maior/v[l] == v[l]){
            cout << proxMaior << " " << proxMaior << "\n";
        }else{
            cout << maior << " " << maior/v[l] << "\n";
        }

        
        return 0;
    }


    ll raiz = sqrt(maior);
    if(raiz*raiz == maior){
        cout << maior << " " << raiz << "\n";
    }else{
        cout << proxMaior << " " << proxMaior << "\n";
    }

    
    return 0;
}