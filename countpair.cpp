#include<bits/stdc++.h>

using namespace std;

bool binary_search(int a[], int n, int target, int l, int r){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]==target) return 1;
        else if(a[mid]<target) l=mid+1;
        else if(a[mid]>target) r=mid-1;
    }
    return 0;
}

int main(){
    int n, q, k=0; cin >> n >> q;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        int target = q-a[i];
        int l=i+1, r=n-1;
        if(binary_search(a,n,target,l,r)==true) k++;
    } cout << k;
}