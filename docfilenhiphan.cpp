#include<stdio.h>
#include<stdlib.h>

struct NgaySinh{
	int ngay, thang, nam;
};

int main(){
	FILE *f;
	f = fopen("ghifilenhiphan.bin", "rb");
	if(f == NULL) exit(1);
	NgaySinh n1;
	fread(&n1, sizeof(struct NgaySinh), 1, f);
	printf("\nNgay sinh: %d/%d/%d", n1.ngay, n1.thang, n1.nam);
	fclose(f);
}

