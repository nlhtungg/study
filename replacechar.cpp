#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    char a, b; cin >> a >> b;
    for(int i=0;i<s.size();i++){
        if(s[i]==a) s[i]=b;
    }
    cout << s;
}
