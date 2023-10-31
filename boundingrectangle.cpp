#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int minx=100000000, miny=1000000000, maxx=0, maxy=0;
    while(t--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(max(x1,x2)>maxx) maxx=max(x1,x2);
        if(min(x1,x2)<minx) minx=min(x1,x2);
        if(max(y1,y2)>maxy) maxy=max(y1,y2);
        if(min(y1,y2)<miny) miny=min(y1,y2);
    }
    cout << (maxx-minx)*(maxy-miny);
}