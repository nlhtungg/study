#include<bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c; cin >> a >> b >> c;
    double delta= b*b-4*a*c;
    if(delta<0) cout << "NO SOLUTION";
    else if(delta==0) cout << fixed << setprecision(2) << -b/(2*a);
    else if(delta>0){
        double x1=(-b-sqrt(delta))/(2*a);
        double x2=(-b+sqrt(delta))/(2*a);
        cout << fixed << setprecision(2) << x1 << " " << x2;
    }
}