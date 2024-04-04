#include <stdio.h>
#include <math.h> 
#define f(x) pow(x 2) -4 * x-10
#define e 0.0001

void main(){
	float x, x1, x2, x0;
	do {
		printf("Enter the value of x1 and x2 \n");
		scanf("%f %f", &x1, &x2);
	} while (f(x1) * f(x2) > 0);
	do {
		x0 = (x1 + x2) /2;
		if((f(x1) * f(x2)) < 0){
			x2 = x0;
		} else x1 = x0;
		x = (x1 + x2) / 2;
	} while (fabs (x0 * x) > e);
	printf("root is = %f", x0);
}
