#include<bits/stdc++.h>

using namespace std;

void nhap(int a[], int n){
    for(int i=0;i<n;i++) cin >> a[i];
}

bool trung(int a[], int b[], int x){
    bool test=true;
    for(int i=0;i<x;i++){
        if(a[i]!=b[i]){
            test=false;
            break;
        }
    }
    return test;
}

bool doi(int a[], int b[], int x){
    bool test=true;
    for(int i=0;i<x;i++){
        if(a[i]!=b[x-1-i]){
            test=false;
            break;
        }
    }
    return test;
}

int main(){
    int n, m;
    cin >> n;
    int a[n];
    nhap(a,n);
    cin >> m;
    int b[m];
    nhap(b,m);
    if(n!=m) cout << 0;
    else {
        if(trung(a,b,n)==true) cout << 1;
        else if(doi(a,b,n)==true) cout << -1;
        else cout << 0;
    }
}