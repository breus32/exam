#include <stdio.h>
#include <math.h>

int main(){
	
	float a, b, c, p, S;

	printf("Vvedite dovjiny a storony: ");
	scanf("%f", &a);
	
	printf("\nVvedite dovjiny b storony: ");
	scanf("%f", &b);
	
	printf("\nVvedite dovjiny b storony: ");
	scanf("%f", &c);
	
	p = (a + b + c) / 2;
	
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	
	printf("\nPlosha S = %.2f", S);

	return 0;
}
