//https://cses.fi/problemset/task/1749
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int arr[MAXN];
pair<int, int> tree[4*MAXN];

void build(int no, int start, int end){
    if(start == end){
        tree[no] = {1, arr[start]};
    }else{
        int mid = (start+end)/2;
        build(no*2, start, mid);
        build(no*2+1, mid+1, end);
        tree[no].first = tree[no*2].first + tree[no*2+1].first;
        tree[no].second = -1;
    }
}

void update(int no, int start, int end, int idx, int val){
    if(start == end){
        tree[no] = {val, arr[start]};
    }else{
        int mid = (start+end)/2;
        if(idx <= mid){
            update(no*2, start, mid, idx, val); 
        }else{
            update(no*2+1, mid+1, end, idx, val);
        }

        tree[no].first = tree[no*2].first+tree[no*2+1].first;
        tree[no].second = -1;
    }
}

int query(int no, int idx){
    if(tree[no].second != -1){
        

        
        return tree[no].second;
    } 
    
    pair<int, int> l = tree[no*2];
    pair<int, int> r = tree[no*2+1];

    if(l.first >= idx) return query(no*2, idx);
    else return query(no*2+1, idx-l.first);


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
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    build(1, 0, n-1);

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        cout << query(1, temp) << endl;
        update(1, 0, n-1, temp, 0);
    }

    // for (int i = 0; i < n*4; i++){
    //     cout << tree[i].second << " ";
    // }
    
    

    return 0;
}