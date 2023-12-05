#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int i, a[27];
    for(i=1;i<27;i++) a[i]=0;
    getline(cin, s);
    for(i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122){
            a[s[i]-96]++;
        }
    }
    for(i=1;i<27;i++){
        if(a[i]>0) printf("\nChu cai %c xuat hien %d lan", i+96, a[i]);
    }
}