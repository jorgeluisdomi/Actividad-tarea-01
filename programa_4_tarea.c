# include <stdio.h> 
# include <math.h>
int main (){
	float a,b,c,x1,x2,t;
	printf("Inicio del programa:\t");
	printf("calculo de las raices de un polinomio de segundo grado\n");
	printf("por favor ingresa el valor de la variable a\n");
	scanf("%f", &a);
	printf("por favor ingresa el valor de la variable b\n");
	scanf("%f", &b);
	printf("por favor ingresa el valor de la variable c\n");
	scanf("%f", &c);
	t=pow(b, 2.0)-4*a*c;
	if (t>0.0){
	
	printf("El valor de tus raices es:\n");
	x1=((-b+sqrt(t))/(2.0*a));
	x2=((-b-sqrt(t))/(2.0*a));
	printf("El valor de tu primera raiz que es x1 es igual a:%f\n", x1);
	printf("El valor de tu segunda raiz que es x2 es igual a:%f\n", x2);
}
	else if (t<=0) {
	printf("ERROR\n");
	printf("No se puede realizar el calculo por que la raiz de la formula es negativa\n");
	}
	printf("Fin del programa");
	
	
}
