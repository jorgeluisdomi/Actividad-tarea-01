# include <stdio.h>
int main (){
	float a,b;
	printf("inicio del programa:\tcalculo de la division de dos valores\n");
	printf("por favor ingresa el valor de tu variable a\n");
	scanf("%f", &a);
	printf("por favor ingresa el valor de tu variable b\n");
	scanf("%f", &b);
	if (b<=0){
		printf("ERROR no se puede realizar una division sobre 0 tu variable b debe ser mayor de 0\n");
	}
	else if (b>0){
		printf("El valor de tu division es de:%f\n", a/b);
	}
	
	
	
	
	
	printf("Fin del programa");

	
	
}
