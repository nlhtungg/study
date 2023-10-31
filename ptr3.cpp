#include<bits/stdc++.h>

using namespace std;
 
float a, b, c;

double func(float x){
    return x*x*x+a*x*x+b*x+c;
}

bool condition(int i, int j, int k){
    if(i+j+k==-a && i*j+i*k+j*k==b && i*j*k==-c) return true;
    else return false;
}

int main(){
    cin >> a >> b >> c;
    int x1, x2, x3, tmp;
    bool check=false;
    for(int i=-100;i<=100;i++){
        if(func(i)==0) tmp=i;
    }
    for(int i=-500;i<=500;i++){
        for(int j=-500;j<=500;j++){
            if(condition(tmp,i,j)==true){
                x1=min(min(tmp,i),j);
                x3=max(max(tmp,i),j);
                x2=-a-x1-x3;
                check=true;
                goto here;
            }
        }
    }
    here:
    if(check==false) cout << "NO SOLUTION";
    else if(x1==x2 && x1==x3) cout << x1 << " " << 3;
    else if(x1==x2) cout << x1 << " " << 2 << endl << x3 << " " << 1;
    else if(x2==x3) cout << x1 << " " << 1 << endl << x3 << " " << 2;
    else cout << x1 << " " << 1 << endl << x2 << " " << 1 << endl << x3 << " " << 1;
}