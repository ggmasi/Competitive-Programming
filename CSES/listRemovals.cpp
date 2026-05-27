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

int update(int no, int start, int end, int idx){
    tree[no].first--; 
    if(start == end){
        return tree[no].second;
    }

    pair<int, int> l = tree[no*2];

    int mid = (start+end)/2;

    if(l.first >= idx) return update(no*2, start, mid, idx);
    else return update(no*2+1, mid+1, end, idx-l.first);

}




int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    build(1, 0, n-1);

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        cout << update(1, 0, n-1, temp) << " ";
        
    }

    // for (int i = 0; i < n*4; i++){
    //     cout << tree[i].second << " ";
    // }
    
    

    return 0;
}