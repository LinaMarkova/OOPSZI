#include "math.h"

double f(double x, double y) 
{
	return (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
}