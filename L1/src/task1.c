#define _CRT_SECURE_NO_WARNINGS  
#include "stdio.h" 
#include "math.h"  

void main()
{
	double x = 5, y = 3;
	double f = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
	printf("x = %.4lf\ny = %.4lf\nf = %.4lf\n\n", x, y, f); 
	printf("x = "); 
	scanf("%lf", &x); 
	printf("y = ");
	scanf("%lf", &y);
	f = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
	printf("f = %.4f", f);
	getch(); 
}

