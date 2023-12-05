#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *f;
	
	f = fopen("D:/2023.1/C_Basic/ghifile.txt","w");
	if(f == NULL){
		printf("\n Loi tao hoac mo file");
		exit(1);
	}
	
	int n;
	printf("\nNhap vao so n: ");
	scanf("%d", &n);
	
	fprintf(f, "%d", n);
	
	fclose(f);
	
	return 0;
}
