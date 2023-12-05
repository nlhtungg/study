#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int sum=0, kount=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    if(sum%2==0) kount++;
    for(int i=1;i<n-k+1;i++){
        sum+=(a[i+k-1]-a[i-1]);
        if(sum%2==0) kount++;
    }
    cout << kount;
}