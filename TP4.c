#include<stdio.h>

int main(void){
	int cal;
	
	printf("Ingrese la calificacion: ");
	scanf("%d",&cal);
	
	if(cal >=90){
		printf("Calificacion: A");
	}
	else if(cal>=80 && cal<90){
		printf("Calificacion: B");
	}
	else if(cal>=70 && cal<80){
		printf("Calificacion: C");
	}else if(cal>=60 && cal<70){
		printf("Calificacion: D");
	}
	else{
		printf("Calificacion: F");
	}
	
	
	return 0;
}
