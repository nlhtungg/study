#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
	if(argc<4) printf("Parameter missing!\n");
	else {
		FILE* f1 = fopen(argv[1],"rt");
		if(f1 != NULL){
			FILE* f2 = fopen(argv[3],"wt");
			if(f2 != NULL){
				int d = atoi(argv[2]);
				while(!feof(f1)){
					int c = fgetc(f1) + d;
					fputc(c,f2);
				}
				fclose(f2);
			} else printf("Cannot open the destination file!\n");
			fclose(f1);	
		} else printf("Source file missing!\n");
	}
}
