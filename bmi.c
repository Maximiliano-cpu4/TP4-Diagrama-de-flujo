#include<stdio.h>

int main(){
	float peso,altura;
	float imc;

	printf("\tTabla de indice de masa corporal\n");
	printf("1. Masa Corporal menor a 18.5: Bajo peso\n2. Masa Corporal entre 18.5 y 24.9: Peso normal\n3. Masa Corporal entre 24.9 y 29.9: Sobrepeso\n4. Masa Corporal mayor a 30: Obesidad\n");

	printf("\nIngrese su peso: ");
	scanf("%f",&peso);
	printf("Ingrese su altura: ");
	scanf("%f",&altura);
	
	imc = peso/(altura*altura);
	
	printf("Su indice de masa corporal es de %.2f\n",imc);
	if(imc <=18.5 ){
		printf("Se encuentra en la primera condicion de la tabla");
	}
	else if(imc>18.5 && imc<=24.9){
	printf("Se encuentra en la segunda condicion de la tabla");
	}
	else if(imc>=24.9 && imc<=29.9){
		printf("Se encuentra en la tercera condicion de la tabla");
	}
	else{
		printf("Se encuentra en la cuarta condicion de la tabla");
	}
	
	

}
