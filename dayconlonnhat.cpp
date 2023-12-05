#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n], start, end, max=0;
    for(int i=0;i<n;i++) cin >> a[i];
    int value[n][n];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(j==i) value[i][j]=a[i];
            else value[i][j]=value[i][j-1]+a[j];
            if(value[i][j]>max){
                max=value[i][j];
                start=i;
                end=j;
            }
        }
    }
    for(int i=start;i<=end;i++) cout << a[i] << " ";
}