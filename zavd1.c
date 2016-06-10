#include <stdio.h>
#include <math.h>

double Geron(double a, double b, double c){
	
	double S, p;
	
	p = (a + b + c) / 2;
	
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	
	return S;
}

int main(){
	
	float a, b, c, p, S;

	printf("Vvedite dovjiny a storony: ");
	scanf("%f", &a);
	
	printf("\nVvedite dovjiny b storony: ");
	scanf("%f", &b);
	
	printf("\nVvedite dovjiny b storony: ");
	scanf("%f", &c);
	
	printf("\nPlosha S = %.2f", Geron(a, b, c));

	return 0;
}
