#include <stdio.h>
#include <stdlib.h>



int main() 
{
	float b,h,a;
	printf("Input base: ");
	scanf("%f", &b);
	printf("Input height: ");
	scanf("%f", &h);
	a=b*h*1/2;
	printf("Triangle's Area: %.2f", a);
	system("PAUSE");
	return 0;
		
}
