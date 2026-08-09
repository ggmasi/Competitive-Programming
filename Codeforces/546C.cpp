// url: https://codeforces.com/contest/546/problem/C
// Title: Soldier and Cards
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    queue<int> a, b;
    int tam; cin >> tam;
    for (int i = 0; i < tam; i++){
        int temp; cin >> temp;
        a.push(temp);
    }
    
    cin >> tam;
    for (int i = 0; i < tam; i++){
        int temp; cin >> temp;
        b.push(temp);
    }

    int iniA = a.front(), iniB = b.front();
    int tamA = a.size(), tamB = b.size();
    int count = 0;
    set<pair<queue<int>, queue<int>>> vis; 
    while(!a.empty() && !b.empty()){
        pair<queue<int>, queue<int>> atual = make_pair(a, b);

        if(vis.count(atual)){
            cout << "-1\n";
            return 0;
        }

        vis.insert(atual);

        count++;
        int tempA = a.front(), tempB = b.front();
        a.pop(); b.pop();

        if(tempA > tempB){
            a.push(tempB);
            a.push(tempA);
        }else{
            b.push(tempA);
            b.push(tempB);
        }
    }

    cout << count << " ";
    if(a.empty()){
        cout << "2\n";
    }else{
        cout << "1\n";
    }

    return 0;
}