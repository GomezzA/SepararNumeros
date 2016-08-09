#include <iostream>
#include <stdio.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num, b, c, z, h,j, u, k;
	float  g, t, e;
	printf("Ingrese un numero de tres cifras: ");
	scanf("%d", &num);
	c=num/100;
	b=c;
	printf("\nCentena es: %d", b);
	h=num%100;
	j=h;
	u=j/10;
	k=u;
	printf("\nDecena es: %d", k);
	t=num%10;
	g=t;
	printf("\nUnidad es: %.f", g);
	return 0;
	
}
