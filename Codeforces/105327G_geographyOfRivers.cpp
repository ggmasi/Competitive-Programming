//https://codeforces.com/gym/105327/problem/G
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

long long int vol[MAXN];
int nome[MAXN];
int lc[MAXN];
int rc[MAXN];
int parent[MAXN];

void build(int no, int n){
    if(no <= n){
        nome[no] = no;
    }else{
        int left = lc[no];
        int right = rc[no];

        build(left, n);
        build(right, n);

        vol[no] = vol[left]+vol[right];

        if(vol[left] > vol[right]){
            nome[no] = nome[left];
        }else if(vol[left] < vol[right]){
            nome[no] = nome[right];
        }else{
            nome[no] = nome[left] < nome[right] ? nome[left] : nome[right];
        }
    }
}

void update(int no, long long int val){
    vol[no] += val;

    int pai = parent[no];
    while(pai != 0){
        int left = lc[pai];
        int right = rc[pai];

        vol[pai] = vol[left] + vol[right];

        if(vol[left] > vol[right]){
            nome[pai] = nome[left];
        }else if(vol[left] < vol[right]){
            nome[pai] = nome[right];
        }else{
            nome[pai] = nome[left] < nome[right] ? nome[left] : nome[right];
        }
        pai = parent[pai];
    }
    
}

void query(int no){
    cout << nome[no] << "\n";
    // if(l > r){
    //     return 0;
    // }if(l == start && r == end){
    //     return tree[no];
    // }
    // int mid = (start+end)/2;
    // return query(no*2, start, mid, l, min(r, mid)) + query(no*2+1, mid+1, end, max(l, mid+1), r);
}

int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> vol[i];
    }

    for (int i = 1; i <= n-1; i++){
        int a, b; cin >> a >> b;

        lc[i+n] = a;
        rc[i+n] = b;
        parent[a] = i+n;
        parent[b] = i+n;
    }
    
    build(2*n-1, n);
    
    query(2*n-1);
    int q; cin >> q;
    for (int i = 0; i < q; i++){
        int a;
        long long int b; 
        cin >> a >> b;
        update(a, b);
        query(2*n-1);
    }
    return 0;
}