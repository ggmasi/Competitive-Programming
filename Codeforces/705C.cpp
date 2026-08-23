// url: https://codeforces.com/contest/705/problem/C
// Title: Thor
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

struct noti{
    int app;
    int idx;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q; cin >> n >> q;
    vector<int> notificacoes;
    vector<int> appsIdx(n+1, -1);
    vector<int> appsNum(n+1, 0);
    vector<int> lastIdx(n+1, -1);
    int leuTudo = 0;
    int res = 0;
    for (int i = 0; i < q; i++){
        int t, x; cin >> t >> x;
        if(t == 1){
            notificacoes.push_back(x);
            appsIdx[x] = notificacoes.size()-1;
            appsNum[x]++;
            res++;
        }else if(t == 2){
            lastIdx[x] = appsIdx[x];
            res -= appsNum[x];
            appsNum[x] = 0;
        }else{
            for (int i = leuTudo; i < x; i++){
                int app = notificacoes[i];
                if(i > lastIdx[app]){
                    res--;
                    appsNum[app]--;
                    lastIdx[app] = i;
                }
            }
            leuTudo = max(leuTudo, x);
            
        }
        cout << res << "\n";
    }
    

    return 0;
}