#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
double f(double x, double y); 
void main()
{
	double x = 5, y = 3;
	printf("x = %.4lf\ny = %.4lf\nf = %.4lf\n\n", x, y, f(x, y));
	printf("x = ");
	scanf("%lf", &x); 
	printf("y = ");
	scanf("%lf", &y);
	printf("f = %.4f", f(x, y));
	getch(); 
}

double f(double x, double y) 
{
	return (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
}

