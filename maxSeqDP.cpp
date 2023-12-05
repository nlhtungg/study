#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int ans[n][n];
    int max=-999999;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==0 && j==0) ans[i][j]=a[0];
            else if(i==j) ans[i][j]=ans[i-1][j]-a[i-1];
            else ans[i][j]=ans[i][j-1]+a[j];
            if(ans[i][j]>max) max=ans[i][j];
        }
    }
    cout << max;
}