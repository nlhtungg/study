#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long int sum=0;
    while(n--){
        long long int x; cin >> x;
        sum+=x;
    }
    cout << sum;
}