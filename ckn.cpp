#include<bits/stdc++.h>

using namespace std;

long long int const mod=1e9+7;

#define ll long long int

int main(){
    ll k, n; cin >> k >> n;
    if(k>n/2) k=n-k;
    ll a[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0) a[j][i]=1;
            else if(j==i) a[j][i]=1;
            else a[j][i]=(a[j-1][i-1]+a[j][i-1])%mod;
            if(j==k && i==n){
                cout << a[k][n];
                return 0;
            }
        }
    }
}