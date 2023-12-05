#include<bits/stdc++.h>

using namespace std;

void split(float x){
    int a = int(x);
    float b = x-a;
    cout << a << endl << b;
}

int main(){
    float x;
    cin >> x;
    split(x);
}