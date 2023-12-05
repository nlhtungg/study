#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q, m=0; cin >> n >> q;
    multiset<int> se;
    for(int i=0;i<n;i++){
        int tmp; cin >> tmp;
        se.insert(tmp);
    }
    set<int>::iterator i;
    set<int>::iterator j;
    for(i=se.begin();i!=se.end();i++){
        for(j=i++;j!=se.end();j++){
            if(*i+*j==q) m++;
            else if(*i+*j>q) break;
        }
    }
    cout << m;
}