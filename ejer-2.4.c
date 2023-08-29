#include <stdio.h>

void copo(int i,int l){
	for(i=0;i<5;i++){
		
		for(l=0;l<=1*i;l++){
			printf("*");
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
	int i,l;
	
	copo(i,l);
	
	return 0;
}

