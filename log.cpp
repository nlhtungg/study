#include<bits/stdc++.h>

using namespace std;

struct day{
    int y;
    string m, d;
    int h, p, s;
    string useless;
};

void nhap(day *x){
    scanf("%d", &x->y);
    if(x->y!=0){
        scanf("-%s-%s", x->m, x->d);
        scanf("%d:%d:%d", &x->h, &x->p, &x->s);
        scanf("%s %s", x->useless, x->useless);
    }
}

int main(){
    day a[100];
    int i;
    while(i>=0){

    }
}