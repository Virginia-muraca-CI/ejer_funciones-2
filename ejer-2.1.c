#include <stdio.h>
#include <stdlib.h>

int suma(int num1,int num2){
	int suma=0;
	suma=num1+num2;
	return suma;
}
	void resta(int num1,int num2){
		int r2=0;
		r2=num1-num2;
		printf("la resta de los numero ingresados es de %d",r2);
	}

		float divi(int num1,int num2){
			float divi=0, a=num1, b=num2;
			divi=a/b;
			return divi;
		}

			int main(){
				int num1=0, num2=0, op=0, r1=0, r3=0;
				float r4=0;
	
				printf("ingrese un numero entero:");
				scanf("%d",&num1);
				printf("ingrese otro numero entero:");
				scanf("%d",&num2);
				printf("Ingrese alguno de los siguientes numeros sugun lo que desee \n1=Suma \n2=Resta \n3=Multiplicacion \n4=Division\n");
				scanf("%d",&op);
	
				if (op==1){

					r1= suma(num1,num2);
					printf("la suma de los numero ingresados es de %d",r1);

				}	else if (op==2){

					resta(num1,num2);

				}	else if (op==3){
	
					r3=num1*num2;
					printf("la multiplicacion de los numero ingresados es de %d",r3);

				}	else if (op==4){

					r4=divi(num1,num2);
					printf("la division de los numero ingresados es de %.2f",r4);

				}	else printf("No a ingresado lo pedido corretamente, vuelva a intentarlo");

	return 0;
}
