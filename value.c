#include <stdio.h>
#include <stdlib.h>



int main() 
{
	float x,y;
	printf("Input value of x: ");
	scanf("%f", &x);	
	y=x/70;
	printf("The value of f(x), f(x)=x/70 is: %.2f\n", y);
	system("PAUSE");
	return 0;
}
