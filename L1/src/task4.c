#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
double x, y, result; 
void f(); 
void main()
{
	x = 5;
	y = 3;
	f(); 
	printf("x = %.4lf\ny = %.4lf\nf = %.4lf\n\n", x, y, result);
	printf("x = ");
	scanf("%lf", &x);
	printf("y = ");
	scanf("%lf", &y);
	f();
	printf("f = %.4f", result);
	getch();
}
void f()
{
	result = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
}

