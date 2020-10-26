# include <stdio.h>
# include <math.h>
int main(){
	float pi=3.1415,r,r2,A,P;
		printf("Inicio del programa\t");
		printf("calculo del area y del perimetro de un circulo\n");
		printf("por favor ingresa el valor del radio\n");
		scanf("%f", &r);
		r2=pow(r,2.0);
		A=pi*r2;
		P=2*pi*r;
		printf("El valor del area de tu circulo es de: %f\n", A);
		printf("El valor del perimetro de tu circulo es de: %f\n", P);
		printf("Fin del programa");
		
		
	
	
	
	
	
}
