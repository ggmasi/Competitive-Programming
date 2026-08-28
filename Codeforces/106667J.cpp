// url: https://codeforces.com/gym/106667/problem/J
// Title: The Brega Game
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

struct SegTree{
    int n;
    vector<ll> tree;
    SegTree(int n) : n(n), tree(4*n, 0) {}
    

    ll merge(ll a, ll b){
        return max(a, b);
    }

    void build(vector<ll>& a, int node, int l, int r){
        if(l == r){tree[node] = a[l]; return;}
        int mid = (l+r)/2;
        build(a, 2*node, l, mid);
        build(a, 2*node+1, mid+1, r);
        tree[node] = merge(tree[2*node], tree[2*node+1]);
    }

    void update(int node, int l, int r, int idx, ll val){
        if(l == r) {tree[node] = val; return;}
        int mid = (l+r)/2;
        if(l <= idx && idx <= mid) update(2*node, l, mid, idx, val);
        else update(2*node+1, mid+1, r, idx, val);
        tree[node] = merge(tree[2*node], tree[2*node+1]);
    }

    ll query(int node, int l, int r, int ql, int qr){
        if(ql > r || qr < l) return 0;
        if(ql <= l && r <= qr) return tree[node];
        int mid = (l+r)/2;
        return merge(query(2*node, l, mid, ql, qr), query(2*node+1, mid+1, r, ql, qr));
    }

    void build(vector<ll>& a){build(a, 1, 0, n-1);}
    void update(int idx, ll val){update(1, 0, n-1, idx, val);}
    ll query(int ql, int qr){ return query(1, 0, n-1, ql, qr);}
};

int main(){
    int n, q;
    cin >> n >> q;

    int idx = -1;

    vector<int> v(n);
    vector<ll> inicial(n);

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        inicial[i] = temp;
        if(temp == n) idx = i;
        v[temp-1] = i;
    }

    SegTree st(n);
    st.build(inicial);


    while(q--){
        int a, b; cin >> a >> b;
        a--; b--;

        ll maior = st.query(a, b);
        maior--;

        if(v[maior] == a || v[maior] == b || a == b){
            cout << "Adilson\n";
            continue;
        }

        if((b-a)%2 == 0){
            cout << "Reginaldo\n";
        }else{
            cout << "Adilson\n";
        }
    }

    return 0;
    

}