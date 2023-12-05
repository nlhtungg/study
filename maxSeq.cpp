#include<bits/stdc++.h>

using namespace std;

int maxLeft(int* a, int L, int R){
int max = -9999999;
int s = 0;
for(int i = R; i >= L; i--){
s += a[i];
if(s > max) max = s;
}
return max;
}

int maxRight(int* a, int L, int R){
int max = -99999999;
int s = 0;
for(int i = L; i <= R; i++){
s += a[i];
if(s > max) max = s;
}
return max;
}


int maxSeq(int* a, int l, int r){
if(l == r) return a[l];
int max;
int mid = (l+r)/2;
int mL = maxSeq(a,l,mid);
int mR = maxSeq(a,mid+1,r);
int mLR = maxLeft(a,l,mid) + maxRight(a,mid+1,r);
max = mL;
if(max < mR) max = mR;
if(max < mLR) max = mLR;
return max;
}


int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cout << maxSeq(a,0,n);
}