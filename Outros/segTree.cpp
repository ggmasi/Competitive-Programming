#include <bits/stdc++.h>
using namespace std;

/*
    Árvore binária capaz de armazenar informações de intervalos de um array. O(log n) tanto para encontrar valores quanto para atualizar.
    A árvore estruturada abaixo armazena as somas nos intervalos o array arr.
    A partir dessa base, é possível adaptar a árvore para diversos modelos, como: subtração em um intervalo, maior/menor número num intervalo, 
*/



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
        tree[no] = tree[no*2]+tree[no*2+1];
    }
}

void update(int no, int start, int end, int idx, int val){
    if(start == end){
        tree[no] = val;
    }else{
        int mid = (start+end)/2;
        if(idx <= mid){
            update(no*2, start, mid, idx, val); 
        }else{
            update(no*2+1, mid+1, end, idx, val);
        }

        tree[no] = tree[no*2]+tree[no*2+1];
    }
}

int query(int no, int start, int end, int l, int r){
    if(l > r){
        return 0;
    }if(l == start && r == end){
        return tree[no];
    }
    int mid = (start+end)/2;
    return query(no*2, start, mid, l, min(r, mid)) + query(no*2+1, mid+1, end, max(l, mid+1), r);
}


//exemplo
int main(){
    int n = 6;
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 5;
    arr[3] = 7;
    arr[4] = 9;
    arr[5] = 11;

    build(1, 0, n-1);

    cout << "Soma de arr[1...3]: " << query(1, 0, n - 1, 1, 3) << "\n";

    cout << "Soma de arr[0...5]: " << query(1, 0, n - 1, 0, n - 1) << "\n";

    update(1, 0, n - 1, 2, 10);

    cout << "Soma de arr[1...3]: " << query(1, 0, n - 1, 1, 3) << "\n";

    cout << "Soma de arr[0...5]: " << query(1, 0, n - 1, 0, n - 1) << "\n";

    return 0;
}