#include<stdio.h>
#include<stdlib.h>

struct NgaySinh{
	int ngay, thang, nam;
};

int main(){
	FILE *f;
	f = fopen("ghifilenhiphan.bin", "wb");
	if(f == NULL) exit(1);
	NgaySinh n1;
	n1.ngay=13;
	n1.thang=6;
	n1.nam=2004;
	
	fwrite(&n1, sizeof(struct NgaySinh), 1, f);
	
	fclose(f);
	
	return 0;
}
