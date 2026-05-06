//https://cses.fi/problemset/task/1649
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;
const int MAXN = 2e5 + 5;
int arr[MAXN];
int tree[4*MAXN];

void build(int no, int start, int end){
    if(start == end){
        tree[no] = arr[start];
    }else{
        int mid = (start+end)/2;
        build(no*2, start, mid);
        build(no*2+1, mid+1, end);
        tree[no] = min(tree[no*2], tree[no*2+1]);
    }
}

void update(int no, int start, int end, int idx, int val){
    if(start == end){
        arr[idx] = val;
        tree[no] = val;
    }else{
        int mid = (start+end)/2;
        if(idx <= mid){
            update(no*2, start, mid, idx, val); 
        }else{
            update(no*2+1, mid+1, end, idx, val);
        }

        tree[no] = min(tree[no*2], tree[no*2+1]);
    }
}

int query(int no, int start, int end, int l, int r){
    if(l > r){
        return INF;
    }if(l == start && r == end){
        return tree[no];
    }
    int mid = (start+end)/2;
    return min(query(no*2, start, mid, l, min(r, mid)), query(no*2+1, mid+1, end, max(l, mid+1), r));
}

int main(){
    int n, q; cin >> n >> q;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    build(1, 0, n-1);
    
    while(q--){
        int t, a, b; cin >> t >> a >> b;
        if(t == 1){
            update(1, 0, n-1, a-1, b);
        }else{
            cout << query(1, 0, n-1, a-1, b-1) << endl;
        }

    }
}