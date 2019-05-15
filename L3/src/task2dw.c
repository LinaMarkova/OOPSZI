#include "Header.h"
double summ2dw(double eps)
{
	double sum = 0;
	int i = 0;
	do
	{
		sum += a(i);
		if (fabs(a(i)) <= eps)
		{
			return sum;
		}
		++i;
	} while (1);
}