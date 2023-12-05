#include<bits/stdc++.h>

using namespace std;

#define ll long long int

ll fib(ll n){
    ll res[n+1];
    res[0]=0, res[1]=1;
    for(ll i=2;i<=n;i++) res[i]=res[i-1]+res[i-2];
    return res[n];
}

int main(){
    ll n; cin >> n;
    cout << fib(n);
}