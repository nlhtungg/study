#include<bits/stdc++.h>

using namespace std;

void swap(float a, float b){
    float tmp;
    tmp=a;
    a=b;
    b=tmp;
}

int main(){
    int n, m, v=0; cin >> n >> m;
    float weight[n], value[n], prop[n];
    for(int i=0;i<n;i++){
        cin >> weight[i] >> value[i];
        prop[i]=value[i]/weight[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(prop[i]>prop[j]){
                swap(prop[i],prop[j]);
                swap(weight[i],weight[j]);
                swap(value[i],value[j]);
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        m-=weight[i];
        if(m<0){
            m+=weight[i];
            continue;
        } else if(m>0){
            v+=value[i];
        } else {
            v+=value[i];
            break;
        }
    }
    cout << v;
}