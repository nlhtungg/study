#include<bits/stdc++.h>

using namespace std;

string replace(string s, char a, char b){
    for(int i=0;i<s.length();i++){
        if(s[i]==a) s[i]=b;
    }
    return s;
}

int main(){
    string x;
    char a, b;
    cin >> x >> a >> b;
    cout << replace(x, a, b);
}