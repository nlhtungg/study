#include<stdio.h>
#include<stdlib.h>

void nhapmang(int x[], int &n){
	do {
		printf("\nNhap vao n:");
		scanf("%d", &n);
	} while(n<=0);
	for(int i=0;i<n;i++) scanf("%d", &x[i]);
}

void xuatmang(int x[], int &n){
	for(int i=0;i<n;i++) printf("\nx[%d]=%d", i, x[i]);
}

void xuatfile(int x[], int n, char tenfile[50]){
	FILE *f;
	f = fopen(tenfile, "w");
	if(f==NULL) exit(1);
	fprintf(f, "%d\n", n);
	for(int i=0;i<n;i++) fprintf(f, "%d\n", x[i]);
}

int main(){
	int a[100];
	int n;
	nhapmang(a, n);
	xuatfile(a, n, "xuatmangrafile.out");
}
