#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int b,a;
	printf("Input birth year: ");
	scanf("%d", &b);	
	a=2016-b;
	printf("Approximate Age based on birth year: %d", a);
	return 0;
		
}
