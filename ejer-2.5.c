#include <stdio.h>
void copo(int i,int k,int num){
	
	for(i=0;i<num;i++){
		
		for(k=0;k<=1*i;k++){
			printf("*");
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
	int i,k,num=0;
	printf("Ingrese la cantidad de lineas que desea que sean un '*':");
	scanf("%d",&num);
	copo(i,k,num);
	return 0;
}

