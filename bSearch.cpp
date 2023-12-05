#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int x[], int start, int n, int k){
    int tmp=(n+start)/2;
    if(k==x[tmp]) return tmp+1;
    else{
        if(k<x[tmp]) BinarySearch(x,start,tmp,k);
        else BinarySearch(x,tmp,n,k);
    }
}

int main(){
    int n, k; cin >> n >> k;
    int x[n];
    for(int i=0;i<n;i++) cin >> x[i];
    cout << BinarySearch(x,0,n,k);
}