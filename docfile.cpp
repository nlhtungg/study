#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *f;
	f = fopen("ghifile.txt", "r");
	if(f == NULL){
		exit(1);
	}
	int n;
	fscanf(f, "%d", &n);
	printf("\nGia tri cua n: %d", n);
	fclose(f);
}
