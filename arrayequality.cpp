#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        bool check=true;
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int j=0;j<m;j++) cin >> b[j];
        if(n!=m){
            cout << 0 << endl;
        } else {
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]){
                    check=false;
                    break;
                }
            }
            if(check==true) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
}