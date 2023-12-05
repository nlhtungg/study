#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n], min=999, max=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    int ans=0;
    for(int i=min;i<=max;i++){
        int k=0, tmp=0, longest=0;
        for(int j=0;j<n;j++){
            if(a[j]>=i) k++;
            if(k>longest) longest=k;
            if(a[j]<i) k=0;
        }
        tmp=i*longest;
        if(tmp>ans) ans=tmp;
    }
    cout << ans;
}