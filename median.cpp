#include<bits/stdc++.h>

using namespace std;

float median(float a[], int n){
    float sum=0, avg, ans=10000000000000;
    for(int i=0;i<n;i++) sum+=a[i];
    avg=sum/n;
    int index;
    for(int i=0;i<n;i++){
        if(fabs(a[i]<avg)<ans){
            ans=fabs(a[i]<avg);
            index=i;
        }
    }
    return a[index];
}

int main(){
    int n;
    cout << "Nhap vao n:";
    cin >> n;
    float a[n];
    cout << endl << "Nhap vao cac phan tu";
    for(int i=0;i<n;i++){
        scanf("%f", &a[i]);
    }
    printf("\n%.2f", median(a,n));
}