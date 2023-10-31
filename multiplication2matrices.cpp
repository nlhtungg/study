#include<bits/stdc++.h>

using namespace std;

int main(){

    //insert matrix 1 [n1][k1]
    int n1, k1; cin >> n1 >> k1;
    int a1[n1][k1];
    for(int j=0;j<n1;j++)
        for(int i=0;i<k1;i++) cin >> a1[j][i];
    
    //insert matrix 2 [n2][k2]
    int n2, k2; cin >> n2 >> k2;
    int a2[n2][k2];
    for(int j=0;j<n2;j++)
        for(int i=0;i<k2;i++) cin >> a2[j][i];
    
    //compute
    int ans[n1][k2];
    for(int j=0;j<n1;j++){
        for(int i=0;i<k2;i++){
            int tmp=0;
            for(int h=0;h<k1;h++) tmp+=a1[j][h]*a2[h][i];
            ans[j][i]=tmp;
        }
    }

    for(int j=0;j<n1;j++){
        for(int i=0;i<k2;i++){
            cout << ans[j][i] << " ";
        } cout << endl;
    }
}