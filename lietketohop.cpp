#include<bits/stdc++.h>

using namespace std;

int n=7, k=3, x[7];

void solution(){
    for(int i=1;i<=k;i++){
        cout << x[i];
    }
    cout << endl;
}

int Try(int i){
    for(int v=x[i-1]+1;v<=n-k+i;v++){
        x[i]=v;
        if(i==k) solution();
        else Try(i+1);
    }
}

int main(){
    x[0]=0;
    Try(1);
}