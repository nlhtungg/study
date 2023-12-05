#include<bits/stdc++.h>

using namespace std;

int n=5, x[5];

void solution(){
    for(int i=1;i<=n;i++){
        cout << x[i];
    }
    cout << endl;
}

int Try(int k){
    for(int v=0;v<=1;v++){
        if(x[k-1]+v<2){
            x[k]=v;
            if(k==n) solution();
            else Try(k+1);
        }
    }
}

int main(){
    x[0]=0;
    Try(1);
}